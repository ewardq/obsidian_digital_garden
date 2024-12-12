---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/pointer-operations/"}
---

---

## Read operation on a pointer

Given a pointer:
```C++
char* address1 = (char*) 0x00007FFF8E3C3824;
```
to read the data stored in that address, we need to ==dereference== it, like this:
```C++
char data = *address1;   // Dereferencing a pointer to read data
```
With the result being that **1 byte of data is read from the pointer and stored into the `data` variable**.

![Pointer.png](/img/user/Data%20Structures%20in%20Cpp/Reference%20images/Pointer.png)

> [!tip] Important
> `*`  is the "Value at address" operator
> `&`  is the "Address of" operator


---

## Write operation on a pointer

To write data to a pointer the address must be ==dereferenced==
```C++
*address1 = 0x89;   // Dereferencing a pointer to write data
```
This assigns the value <font color="#BF8FFB">0x89</font> to the address being pointed at.