# BPI-BIT-Arduino_IDE

## Installation Instructions:

+ ### Arduino IDE
    [Arduino IDE Download](https://www.arduino.cc/en/Main/Software)

+ ### ESP32 Development Kit

    #### Development Repository:
    > From [espressif/arduino-esp32](https://github.com/espressif/arduino-esp32)

    - Using Arduino IDE Boards Manager (preferred)
      + [Instructions for Boards Manager](docs/boards_manager.md)
    - Using Arduino IDE with the development repository
      + [Instructions for Windows](docs//windows.md)
      + [Instructions for Mac](docs/mac.md)
      + [Instructions for Debian/Ubuntu Linux](docs/debian_ubuntu.md)
      + [Instructions for Fedora](docs/fedora.md)
      + [Instructions for openSUSE](docs/opensuse.md)

## Pin Define

<table>
  <tr><td>Pin Name</td><td>Analog Function1</td><td>BIT Function</td><td>Function1</td><td>Function2</td><td>Power</td></tr>
  <tr><td>P3</td><td>ADC2_CH4</td><td></td><td>GPIO13</td><td></td><td></td></tr>
  <tr><td>P0</td><td>ADC2_CH8/DAC1</td><td>BUZZER</td><td>GPIO25</td><td></td><td></td></tr>
  <tr><td>P4</td><td>ADC2_CH3</td><td>INT-9250</td><td>GPIO16</td><td></td><td></td></tr>
  <tr><td>P5</td><td>ADC1_CH7</td><td>BOTTON A</td><td>GPI 35</td><td></td><td></td></tr>
  <tr><td>P6</td><td>ADC2_CH5</td><td></td><td>GPIO12</td><td></td><td></td></tr>
  <tr><td>P7</td><td>ADC2_CH6</td><td></td><td>GPIO14</td><td></td><td></td></tr>
  <tr><td>P1</td><td>ADC1_CH4</td><td></td><td>GPIO32</td><td></td><td></td></tr>
  <tr><td>P8</td><td></td><td></td><td>GPIO16</td><td></td><td></td></tr>
  <tr><td>P9</td><td></td><td></td><td>GPIO17</td><td></td><td></td></tr>
  <tr><td>P10</td><td>ADC2_CH9/DAC2</td><td></td><td>GPIO26</td><td></td><td></td></tr>
  <tr><td>P11</td><td>ADC2_CH7</td><td>BOTTON B</td><td>GPIO27</td><td></td><td></td></tr>
  <tr><td>P12</td><td>ADC2_CH2</td><td></td><td>GPIO02</td><td></td><td></td></tr>
  <tr><td>P2</td><td>ADC1_CH5</td><td></td><td>GPIO33</td><td></td><td></td></tr>
  <tr><td>P13</td><td></td><td></td><td>GPIO18</td><td>SPI_SCK</td><td></td></tr>
  <tr><td>P14</td><td></td><td></td><td>GPIO19</td><td>SPI_MISO</td><td></td></tr>
  <tr><td>P15</td><td></td><td></td><td>GPIO23</td><td>SPI_MOSI</td><td></td></tr>
  <tr><td>P16</td><td></td><td></td><td>GPIO05</td><td>SPI_SS</td><td></td></tr>
  <tr><td>3V3</td><td></td><td></td><td></td><td></td><td>POWER:3V3</td></tr>
  <tr><td>3V3</td><td></td><td></td><td></td><td></td><td>POWER:3V3</td></tr>
  <tr><td>3V3</td><td></td><td></td><td></td><td></td><td>POWER:3V3</td></tr>
  <tr><td>P19</td><td></td><td></td><td>GPIO22</td><td>I2C_SCL</td><td></td></tr>
  <tr><td>P20</td><td></td><td></td><td>GPIO21</td><td>I2C_SDA</td><td></td></tr>
  <tr><td>GND</td><td></td><td></td><td></td><td></td><td>GROUND</td></tr>
  <tr><td>GND</td><td></td><td></td><td></td><td></td><td>GROUND</td></tr>
  <tr><td>GND</td><td></td><td></td><td></td><td></td><td>GROUND</td></tr>
</table>

## Onboard peripherals

<table>
  <tr>  <td></td>  <td>IO</td>  <td>Mode</td>    </tr>
  <tr>  <td>Light Sensor(L)</td>  <td>GPI 36</td>    <td>Analog Input</td>  </tr>
  <tr>  <td>Light Sensor(R)</td>  <td>GPI 39</td>    <td>Analog Input</td>  </tr>
  <tr>  <td>Temperature Sensor</td>  <td>GPI 34</td>   <td>Analog Input</td>  </tr>
  <tr>  <td>Buzzer</td>  <td>GPIO 25</td>  <td>PWM(Digital Output) / Analog Output</td>    </tr>
  <tr>  <td>RGB_LED</td>  <td>GPIO 4</td>   <td>Digital Output</td>  </tr>
  <tr>  <td>MPU9250_SCL</td>  <td>GPI 22</td>   <td>Digital Output</td>  </tr>
  <tr>  <td>MPU9250_SDA</td>  <td>GPI 21</td>   <td>Digital Output</td>  </tr>
  <tr>  <td>MPU9250_INT</td>  <td>GPI 16</td>   <td>Digital Input</td>  </tr>
  <tr>  <td>R_LED(SPI_SCK)</td>  <td>GPI 18</td>   <td>Digital Output</td>  </tr>
</table>
