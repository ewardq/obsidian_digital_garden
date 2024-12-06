---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/c-c-global-variables/"}
---

---

==Scope:== Global variables are visible to all the function of a program. They are everywhere and can be accessed from another file of the project.

==Default value:== All uninitialized global variables will have 0 as a default value.

==Lifetime:== Till the end of the execution of the program.

_Example_
```c++
#include <stdio.h>

int myVariable;      // Declaration of a global variable

int main(){
	myVariable = 540;
	printf("The variable has the value of %d", myVariable);
	return 0;
}
```

_Output_
```c++
The variable has the value of 540
```
No error at all!