# GetRPimodel_cpp
C++ Header only library to  get Raspberry Pi model Name(eg: A, B, B+...) and secondary informations provided a table  https://elinux.org/RPi_HardwareHistory.

## How does it work
The Class **GetRPiModel** recognize what revision of Raspberry Pi running on it, and return the Raspberry Pi model infomation and other infos according to the table on this [page](https://elinux.org/RPi_HardwareHistory).

## Why do we need a software library to recognize the Raspberry Pi Model?
Because there are several difference of Hardware configration depend on revision of Raspberry Pi. For example, UART device of **3 Model B** is **/dev/ttyS0** while UART of othe model is **/dev/ttyAMA0**.



