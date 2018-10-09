/****************************************
 * Board    :BPI-BIT                    *
 * Hardware :v1.2&v1.4                  *
 * function :Get temperature            *
 *           (degree Celsius)           *
 * IDE      :Arduino                    * 
 *                                 hulk *
 ****************************************/

#include<math.h>

const float voltagePower = 3.3;
const float Rs = 5.1; //Sampling Resistance is 5.1K ohm
const int B = 3950;
const double T = 273.15 + 25; //Normal Temperature Parameters 
const double R1 = 10; //Normal Temperature Resistance (K ohm)

double Temp_Value = 0;

void setup()
{
  Serial.begin(115200);//Init Serial 115200-8-1-n
  
  pinMode(TEMPERATURE_SENSOR, INPUT);//TEMPERATURE_SENSOR(IO34) Input Mode
}

void loop() 
{
  Temp_Value = analogRead(TEMPERATURE_SENSOR);//Read Analog Value

  //IO34 vlotage value
  double voltageValue = (Temp_Value / 4095) * 3.3;//
  Serial.print("Current voltage value=");
  Serial.println(voltageValue);
  
  //Thermistor value
  double Rt = ((voltagePower - voltageValue) * Rs) / voltageValue;
  Serial.print("Current registor value=");
  Serial.println(Rt);
  
  //Temperature value
  Serial.print("Current temperature value=");
  Serial.println(((T * B) / (B + T * log(Rt / R1))) - 273.15);
  Serial.println();

  delay(1000);
}
