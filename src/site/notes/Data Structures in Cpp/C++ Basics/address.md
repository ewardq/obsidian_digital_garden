---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/address/"}
---

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