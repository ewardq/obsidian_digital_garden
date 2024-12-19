
---

## Effects of using different pointer data types on pointer READ

The data type used when declaring a pointer i.e. (`char* PointerVariable`) determines how much data will be accessed or fetched when dereferencing that pointer, for example, the former pointer will only fetch `char` --> 1 byte of data, a pointer declared with `short` will fetch 2 bytes of data.

To illustrate this, execute the following code:

```C++
#include<stdio.h>

long long int g_data = 0x8877665544332211;

int main(void){
    char* pAddress1;
    pAddress1 = (char*)&g_data;
    printf("Value at address %p is: %x\n", pAddress1, *pAddress1);

    short *pAddress2;
    pAddress2 = (short*)&g_data;
    printf("Value at address %p is: %x\n", pAddress2, *pAddress2);

    int *pAddress3;
    pAddress3 = (int*)&g_data;
    printf("Value at address %p is: %x\n", pAddress3, *pAddress3);

    long long int *pAddress4;
    pAddress4 = (long long int*)&g_data;
    printf("Value at address %p is: %I64x\n", pAddress4, *pAddress4);

    return 0;
}
```

_Output_
```C++
Value at address 00007FF71CCE4010 is: 11
Value at address 00007FF71CCE4010 is: 2211
Value at address 00007FF71CCE4010 is: 44332211
Value at address 00007FF71CCE4010 is: 8877665544332211
```
where each pointer type fetches only a part of the data stored in the variable `g_data` and ==the address remains the same regardless of which data type is chosen for each pointer.== 


---

## Pointer Arithmetic (Addition)

What happens when you add to a pointer?

The answer lies in how that specific pointer was declared. Like we saw in the previous example, each data type determines how much data will be read/fetched and it will also determine ==how many bytes will the address jump when adding a integer to a pointer.==

To illustrate this, let's add _one_ to a `char` pointer.

```C++
#include<stdio.h>

long long int g_data = 0x8877665544332211;

int main(void){
    char *pAddress = (char*)&g_data;

    printf("value of pAddress %p is %x\n", pAddress, *pAddress);

    pAddress = pAddress + 1;    // Traverse to the next byte

    printf("value of pAddress %p is %x\n", pAddress, *pAddress);
}
```

_Output_
```C++
value of pAddress 00007FF6B5E64010 is 11
value of pAddress 00007FF6B5E64011 is 22
```
Where, because the pointer was declared as a `char` (1 byte), when an addition of _one_ is made, the address changes only **one byte.**

If we instead we add 5 bytes, the result is the following:

```C++
#include<stdio.h>

long long int g_data = 0x8877665544332211;

int main(void){
    char *pAddress = (char*)&g_data;

    printf("value of pAddress %p is %x\n", pAddress, *pAddress);

    pAddress = pAddress + 5;    // Traverse to the 6th byte

    printf("value of pAddress %p is %x\n", pAddress, *pAddress);
}
```

_Output_
```C++
value of pAddress 00007FF6CC5A4010 is 11
value of pAddress 00007FF6CC5A4015 is 66
```
Where we traversed 5 bytes.

Similarly, if we want to traverse the data 4 bytes at at time, we can use an `int` with the GCC compiler:

```C++
#include<stdio.h>

long long int g_data = 0x8877665544332211;

int main(void){
    int *pAddress = (int*)&g_data;

    printf("value of pAddress %p is %x\n", pAddress, *pAddress);

    pAddress = pAddress + 1;

    printf("value of pAddress %p is %x\n", pAddress, *pAddress);
}
```

_Output_
```C++
value of pAddress 00007FF6171D4010 is 44332211
value of pAddress 00007FF6171D4014 is 88776655
```
Where we see that we need to sum only _one_ to the pointer to traverse all of the data.