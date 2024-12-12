---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/pointers/"}
---

---

Pointers are one of the essential programming features which are available in C.

Pointers are heavily used in embedded C programming to:
- Configure the peripheral register addresses.
- Read/Write into peripheral data registers.
- Read/Write into SRAM/FLASH locations and for many other things.

A pointer ==points to a memory address where a variable is stored==


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/data-structures-in-cpp/c-basics/address/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---

The address of a variable is the physical location of a variable in memory. It can be accessed with the `&` keyword. 

Having the address of a variable can be useful so the location in memory of a variable can be accessed by a pointer later on.

![VariableAddress.png](/img/user/Data%20Structures%20in%20Cpp/Reference%20images/VariableAddress.png)

```c++
#include <stdio.h>

int main(){
	int variable1 = 23;   // Declate an integer variable
	int* ptr;       // Declare a pointer to an integer
	ptr = &var;     // Assing the pointer the address of the variable

    cout << "Value of variable1: " << variable1 << endl;
    cout << "Address of varariable1: " << &variable1 << endl;
    cout << "Value of ptr (Address it holds): " << ptr
         << endl;
    cout << "Value pointed to by ptr: " << *ptr
         << endl; // Dereferencing pointer to access the
                  // value of var

    return 0; 
}
```

[^1]
where the output is as follows:

```c++
Value of var: 23
Address of var: 0x00007FFF8E1
Value of ptr (Address it holds): 0x00007FFF8E1
Value pointed to by ptr: 23
```

[^1]: [Types of Pointer in Programming - GeeksforGeeks](https://www.geeksforgeeks.org/types-of-pointer-in-programming/)

</div></div>
