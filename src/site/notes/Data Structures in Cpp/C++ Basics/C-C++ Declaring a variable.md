---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/c-c-declaring-a-variable/"}
---

---
# Variable definition vs. declaration

A variable is **defined** when the compiler generates instructions to ==allocate the storage for the variable.==

A variable is **declared** when the compiler is informed that ==a variable exists along with its type.== The compiler does not generate instructions to allocate the storage for the variable at that point.

> [!tip] Note
> A variable definition is also a declaration, but not all variable declarations are definitions.


_Pure declaration example_
```C++
#include <stdio.h>

extern int myVariable;      // Pure declaration of a variable

int main(){
	myVariable = 540;
	printf("The variable has the value of %d", myVariable);
	return 0;
}
```

_Output_
```C++
/usr/bin/ld: /tmp/ccnUJk4h.o: warning: relocation against `myVariable' in read-only section `.text'
/usr/bin/ld: /tmp/ccnUJk4h.o: in function `main':
main.c:(.text+0xa): undefined reference to `myVariable'
/usr/bin/ld: main.c:(.text+0x14): undefined reference to `myVariable'
/usr/bin/ld: warning: creating DT_TEXTREL in a PIE
collect2: error: ld returned 1 exit status
```
In this example, the compiler does not allocate memory to this variable so it can't use it in the `main( )` function. This is because it thinks that the variable `myVariable` is **defined** in another file.


_Definition example_
```C++
#include <stdio.h>

int myVariable;   // Definition (and declaration) of a variable

int main(){
	myVariable = 540;
	printf("The variable has the value of %d", myVariable);
	return 0;
}
```

_Output_
```C++
The variable has the value of 540
```
Here, the compiler does indeed make use of the variable `myVariable` because it allocated memory for that. It is **both defined and declared** in this file.


