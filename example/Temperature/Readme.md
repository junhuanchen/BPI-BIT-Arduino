# BPI-BIT 示例代码-获取温度（摄氏度）

## 实验现象：

通过串口返回板载热敏电阻的ADC返回值、实时电阻和对应温度。

## NTC热敏电阻值与温度换算：

计算公式：`Rt = R *EXP(B*(1/T1-1/T2))`

- 参数介绍
1. Rt 是热敏电阻在T1温度下的阻值(采用给定的标准温度下电阻值，即热敏电阻参数R25=10KΩ)
2. R是热敏电阻在T2常温下的标称阻值(采用给定的标准温度下电阻值，即热敏电阻参数R25=10KΩ)
3. B值是热敏电阻的重要参数
4. EXP是e的n次方
5. 这里T1和T2指的是K度即开尔文温度，K度=273.15(绝对温度)+摄氏度

比如 NTC热敏电阻 10K （型号：NTC-0805-103F-3950F） 5％精度 B值：3950 1％ 10Ｋ就是25度的温度
对于已知Rt求T1还需要做一些转换，对于math.h中提供exp（a）函数，用于求e的 a次方。所以涉及公式转换需要公式lnx。
`T = NTC_B*log10(e)*NTC_T0 / ( NTC_T0*log10(fRegister) + NTC_B*log10(e)LOGE - NTC_T0*log10(NTC_R0) ) - 273`;（这里使用换低公式换成log10，相比log计算时间有明显减少）。


  - 转换为代码：
  ```
  const float voltagePower = 3.3;
  const float Rs = 5.1; //Sampling Resistance is 5.1K ohm
  const int B = 3950;
  const double T = 273.15 + 25; //Normal Temperature Parameters 
  const double R1 = 10; //Normal Temperature Resistance (K ohm)

  double Rt = ((voltagePower - voltageValue) * Rs) / voltageValue;
  
  ((T * B) / (B + T * log(Rt / R1))) - 273.15
  ```