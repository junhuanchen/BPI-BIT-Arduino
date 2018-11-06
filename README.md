# BPI-BIT-Arduino_IDE [![MIT](https://img.shields.io/github/license/mashape/apistatus.svg?style=for-the-badge)](./LICENSE)


----------------------------------------------------------
- **[drive](./drive)**:存放Windows/Linux/MAC OS驱动程序
----------------------------------------------------------

- **[example](./example)**:存放了BPI-BIT的Arduino示例代码
  + [BuzzerFeeding](./example/BuzzerFeeding):控制蜂鸣器鸣叫声音的频率逐渐加强
  + [Key-LED](./example/Key-LED):通过按键A控制在LED面板上亮3颗LED
  + [UnitTest](./example/UnitTest):BIT板基本功能测试
  + [compass](./example/compass):BIT板板载MPU9250 Master Mode 指北针示例代码
----------------------------------------------------------


## Pin Define 引脚定义

| Pin Name | Analog Function1 | Analog Function2 | Function1 | Function2 | Power     |
| -------- | ---------------- | ---------------- | --------- | --------- | --------- |
| P3       | ADC2\_CH4        |                  | GPIO13    |           |           |
| P0       | ADC2\_CH8        | DAC\_1           | GPIO25    |           |           |
| P4       | ADC2\_CH3        |                  | GPIO15    |           |           |
| P5       | ADC1\_CH7        |                  | GPIO35    |           |           |
| P6       | ADC2\_CH5        |                  | GPIO12    |           |           |
| P7       | ADC2\_CH6        |                  | GPIO14    |           |           |
| P1       | ADC1\_CH4        |                  | GPIO32    |           |           |
| P8       |                  |                  | GPIO16    |           |           |
| P9       |                  |                  | GPIO17    |           |           |
| P10      | ADC2\_CH9        | DAC\_2           | GPIO26    |           |           |
| P11      | ADC2\_CH7        |                  | GPIO27    |           |           |
| P12      | ADC2\_CH2        |                  | GPIO02    |           |           |
| P2       | ADC1\_CH5        |                  | GPIO33    |           |           |
| P13      |                  |                  | GPIO18    | SPI\_SCK  |           |
| P14      |                  |                  | GPIO19    | SPI\_MISO |           |
| P15      |                  |                  | GPIO23    | SPI\_MOSI |           |
| P16      |                  |                  | GPIO05    | SPI\_SS   |           |
| 3V3      |                  |                  |           |           | POWER:3V3 |
| 3V3      |                  |                  |           |           | POWER:3V3 |
| 3V3      |                  |                  |           |           | POWER:3V3 |
| P19      |                  |                  | GPIO22    | I2C\_SCL  |           |
| P20      |                  |                  | GPIO21    | I2C\_SDA  |           |
| GND      |                  |                  |           |           | GROUND    |
| GND      |                  |                  |           |           | GROUND    |
| GND      |                  |                  |           |           | GROUND    |

## LED序号

| ↖  |  ↑  |  ↑  |  ↑  |  ↗ |
|-----|-----|-----|-----|-----|
| 20  | 15  | 10  | 5   | 0   |
| 21  | 16  | 11  | 6   | 1   |
| 22  | 17  | 12  | 7   | 2   |
| 23  | 18  | 13  | 8   | 3   |
| 24  | 19  | 14  | 9   | 4   |
| ↙  |  ↓  |  ↓  |  ↓  |  ↘ |

## Onboard peripherals 板载外设

| Onboard peripherals| Interface| Pin Mode                            |
|:------------------:|:--------:|:------------------------------------|
| Light Sensor(L)    | GPIO 36  | Analog Input                        |
| Light Sensor(R)    | GPIO 39  | Analog Input                        |
| Botton A           | GPIO 35  | Digital Input                       |
| Botton B           | GPIO 27  | Digital Input                       |
| Temperature Sensor | GPIO 34  | Analog Input                        |
| Buzzer             | GPIO 25  | PWM(Digital Output) / Analog Output |
| RGB_LED            | GPIO 4   | Digital Output                      |
| MPU9250_SCL        | GPIO 22  | Digital Output                      |
| MPU9250_SDA        | GPIO 21  | Digital Output                      |
| MPU9250_INT        | GPIO 16  | Digital Input                       |
| R_LED(SPI_SCK)     | GPIO 18  | Digital Output                      |

## pins_arduino.h

|Sspecial Name       | GPIO| |Name|GPIO|
|:------------------:|:---:|-|:--:|:--:|
| BUZZER             | 25  | | P0 | 25 |
| BUTTON_A           | 35  | | P1 | 32 |
| BUTTON_B           | 27  | | P2 | 33 |
| RGB_LED            | 04  | | P3 | 13 |
| LIGHT_SENSOR1      | 36  | | P4 | 15 |
| LIGHT_SENSOR2      | 39  | | P5 | 35 |
| TEMPERATURE_SENSOR | 34  | | P6 | 12 |
| MPU9250_INT        | 16  | | P7 | 14 |
|                    |     | | P8 | 16 |
| SDA                | 21  | | P9 | 17 |
| SCL                | 22  | | P10| 26 |
|                    |     | | P11| 27 |
| SS                 | 05  | | P12| 02 |
| MOSI               | 23  | | P13| 18 |
| MISO               | 19  | | P14| 19 |
| SCK                | 18  | | P15| 23 |
|                    |     | | P16| 05 |
| DAC1               | 26  | | P19| 22 |
| DAC2               | 25  | | P20| 21 |
