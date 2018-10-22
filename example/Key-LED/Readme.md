# BPI-BIT 示例代码-物理按键与LED面板

## 实验现象：

按下按键A，LED面板显示字母A；按下按键B，LED面板显示字母B。

## 按键消抖（按键去抖动）：
```C++
if (digitalRead(BUTTON_A) == LOW)
    {
        delay(10);
        if (digitalRead(BUTTON_A) == LOW)
        {
            //Your code.
        }
    }
```
