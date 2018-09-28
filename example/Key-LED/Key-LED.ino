/****************************************
 * Board    :BPI-BIT                    *
 * Hardware :v1.2                       *
 * function :Key & RGB LED              *
 * IDE      :Arduino                    * 
 *                                 hulk *
 ****************************************/
#include <Arduino.h>
#include <NeoPixelBus.h>

const uint16_t PixelCount = 25;
const uint8_t PixelPin = 4;

#define colorSaturation 128
#define delay_ms 500

NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod> strip(PixelCount, PixelPin);

RgbColor red(colorSaturation, 0, 0);
RgbColor green(0, colorSaturation, 0);
RgbColor blue(0, 0, colorSaturation);
RgbColor white(colorSaturation);
RgbColor black(0);
RgbColor num1(0.8 * colorSaturation, 0, 0.2 * colorSaturation);
RgbColor num2(0.5 * colorSaturation, 0, 0.5 * colorSaturation);
RgbColor num3(0.25 * colorSaturation, 0, 0.75 * colorSaturation);

#define ledPower 2 //It's very important for the v1.2, if you use the v1.4 ,you can delete it
#define BottomA 35
#define BottomB 27

int brightness = 0;
int fadeAmount = 5;

void setup()
{
    Serial.begin(115200); //Serial Port Config 115200-8-N-1
    while (!Serial); // wait for serial attach

    Serial.println();
    Serial.println("Initializing...");
    Serial.flush();

    // this resets all the neopixels to an off state
    strip.Begin();
    strip.Show();

    //You can also use BUTTON_A / BUTTON_B
    pinMode(BottomA, INPUT);//Botton A Pin Mode :Digital Input 
    pinMode(BottomB, INPUT);//Botton B Pin Mode :Digital Input
    pinMode(ledPower,OUTPUT);
    digitalWrite(ledPower, HIGH); //It's very important for the v1.2, if you use the v1.4 ,you can delete it
}

void loop()
{
    if (digitalRead(BottomA) == LOW)
    {
        delay(10);
        if (digitalRead(BottomA) == LOW)
        {
            strip.SetPixelColor(16, num1);
            strip.SetPixelColor( 7, num2);
            strip.SetPixelColor(18, num3);
            strip.Show();
        }
        else
        {
        int i;
        Serial.println("Turn Off");
            for (i = 0; i <= PixelCount - 1; i++)
            {
            strip.SetPixelColor(i, black);
            strip.Show();
            }
        }
    }
}
