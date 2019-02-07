# GetRPimodel_cpp
C++ Header only library to  get **Raspberry Pi model Name(eg: A, B, B+...)** and secondary informations provided a table  https://elinux.org/RPi_HardwareHistory on eLinux.

## How does it work
The Class **GetRPiModel** recognize what revision of Raspberry Pi running on it, and return the Raspberry Pi model infomation and other infos according to the table on this [page](https://elinux.org/RPi_HardwareHistory).

## Why do we need a software library to recognize the Raspberry Pi Model?
Because there are several difference of Hardware configration depend on revision of Raspberry Pi. For example, UART device of **3 Model B** is **/dev/ttyS0** while UART of othe model is **/dev/ttyAMA0**. So you should put a conditional branch

## How to use

**GetRPimodel** is a **header only**, so just include **GetRPiModel.h** on your source, that's it.

```
#include "GetRPiModel.h"

int main(){

	// Define GetRPiModel object.
	GetRPiModel m;  
```

## example
Please refer [example.cpp](https://github.com/UedaTakeyuki/GetRPimodel_cpp/blob/master/example.cpp) as an example code.

## member functions

### revision()
Return revison string of the Raspberry Pi which the GetRPimodel running on.

### functions which return corresponding string according to the [table](https://elinux.org/RPi_HardwareHistory) on eLinux.
- release_date() return **Release Date**.
- model_strict() return **Model**.
- PCB_revision() return **PCB Revision**.
- memory() return **Memory**.
- notes() return **Note**.

### model_unified()
For convenience, return unified string of RaspberryPi model as follows.
- "B" is unified from "B", B (Beta)", "B (ECN0001)"
- "A"
- "B+"
- "Compute Module" is unified from "Compute Module 1", "Compute Module 3 (and CM3 Lite)"
- A+"
- "2 Model B" is unified from "2 Model B", "2 Model B (with BCM2837)"
- "Zero" is unified from "Zero", "Zero W"
- "3 Model B" is unified from "3 Model B", "3 Model B+"
- "3 Model A" is unified from "3 Model A+"

### model()
Return **RPiModel** enum class member defined under the **GetRPimodel.h** as follows:
```
enum class RPiModel {
  B, A, B_plus, Compute_Module, A_plus, B2, Zero, B3, A3
};
```

The unification logic is the same as model_unified().
