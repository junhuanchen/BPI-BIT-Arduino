/****************************************
 * Board    :BPI-BIT                    *
 * Hardware :v1.2&v1.4                  *
 * function :Get brightness(Percentage) *
 * IDE      :Arduino                    * 
 *                                 hulk *
 ****************************************/

int LUM_Value0=0;//Defining variable 0
int LUM_Value1=0;//Defining variable 1

void setup() 
{
  Serial.begin(115200);//Init Serial 115200-8-N-1
  
  //Init snesor GPIO Input mode
  pinMode(LIGHT_SENSOR1,INPUT);
  pinMode(LIGHT_SENSOR2,INPUT);
}

void loop() 
{
  //Get the ADC value of GPIO
  LUM_Value0 = analogRead(LIGHT_SENSOR1);
  LUM_Value1 = analogRead(LIGHT_SENSOR2);
  //Serial print
  Serial.println("-------------------------------");
  Serial.println("ADC raw value:");        
  Serial.print("Light Sensor 1(Left):");
  Serial.println(LUM_Value0);
  Serial.print("Light Sensor 2(Right):");
  Serial.println(LUM_Value1);
  Serial.println("-------------------------------");
  //Get brightness Percentage
  double lumLevel0 = (LUM_Value0 / 4095.00);
  double lumLevel1 = (LUM_Value1 / 4095.00);
  Serial.println("Brightness level (Percentage):");
  Serial.print("Light Sensor 1(Left):");
  Serial.print((lumLevel0 * 100.00),2);
  Serial.println("%");
  Serial.print("Light Sensor 2(Right):");
  Serial.print((lumLevel1 * 100.00),2);          
  Serial.println("%");
  Serial.println("-------------------------------");
  delay(1000);
}
