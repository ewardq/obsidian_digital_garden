---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/type-casting/"}
---

---

Typecasting is a ==way of converting a variable or data from one data type to another data type.==

Data will be truncated when the higher data type is converted into a lower data type.

_Example_
```c++
int x;
float y;

y = (float) x;  // Typecasting into a float data type
```

---
## There are two types of casting:

- Implicit casting (Compiler does this)
- Explicit casting (Programmer does this)

_Implicit casting_
```c++
int main(){
    unsigned char data = 0x87 + 0xFF00;
}
```
_Output_
```c++
warning: unsigned conversion from ‘int’ to ‘unsigned char’ changes value from ‘65415’ to ‘135’ [-Woverflow]
   13 |     unsigned char data = 0x87 + 0xFF00;
      |                          ^~~~
```
Here, the compiler _truncated_ the data of the second value `0XFF00` so it would fit into an `unsigned char` (255 bits), so the result is a variable with the value of  `data = 0x83 `


_Explicit casting_
```c++
int main(){
    unsigned char data = (unsigned char)(0x87 + 0xFF00);
}
```
_Output_
```c++
15:40:23 Build Finished. 0 errors, 0 warnings. (took 512ms)
```
Where now the compiler doesn't throw any warnings and the sum is performed correctly.

```c++
data = 65415
```