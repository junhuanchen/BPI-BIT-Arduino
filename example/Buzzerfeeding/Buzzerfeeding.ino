/****************************************
 * Board    :BPI-BIT                    *
 * Hardware :v1.2&v1.4                  *
 * function :Buzzer Feeding             *
 * IDE      :Arduino                    * 
 *                                 hulk *
 ****************************************/
#include <Arduino.h>
#include <NeoPixelBus.h>

#define LEDC_CHANNEL_0 0
#define LEDC_TIMER_13_BIT 13

#define Buzzer 25

#define brightness 20 

int BuzzerTestFreq = 0;   
int LEDC_BASE_FREQ = 200;

/*****************************************************************
 * Function        :ledcAnalogWrite                              *
 * Input Parameter :channel / value                              *
 * Output Parameter:None                                         *
 * Features        :Match value to channel and convert to duty   *                               
 ****************************************************************/
void ledcAnalogWrite(uint8_t channel, uint32_t value)
{
    // calculate duty, 8191 from 2 ^ 13 - 1 (2 ^ LEDC_TIMER_13_BIT - 1)
    //value_MAX = 255
    uint32_t duty = (8191 / 255) * value;
    // write duty to LEDC
    ledcWrite(channel, duty);
}

void setup()
{ 
    Serial.begin(115200);
}

void loop()
{

    ledcSetup(LEDC_CHANNEL_0, LEDC_BASE_FREQ, LEDC_TIMER_13_BIT);
    ledcAttachPin(Buzzer, LEDC_CHANNEL_0);
    LEDC_BASE_FREQ = LEDC_BASE_FREQ + 10;
    // set the brightness on LEDC channel 0
    ledcAnalogWrite(LEDC_CHANNEL_0, brightness);
    delay(100);
    Serial.print("Freq:");
    Serial.print(LEDC_BASE_FREQ);
    Serial.print("           Duty:");
    Serial.print(brightness/2.55);
    Serial.println();
    ledcAnalogWrite(LEDC_CHANNEL_0, 0);
}
