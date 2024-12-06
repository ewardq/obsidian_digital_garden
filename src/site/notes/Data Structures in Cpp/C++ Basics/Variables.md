---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/variables/"}
---

---

Variables are **identifiers for your data.**

- Data is usually stored in computer memory.
- So, a variable acts as a label to a memory location where the data is stored.
- **Variable names are not stored inside the computer memory**, and the [[C - Compiler Process \| compiler]] replaces them with memory location addresses during data manipulation.

```c++
#include <stdio.h>

int main(){
	\\ variableA and variableB are variables of type char
    char variableA = 20;
    char variableB = 30;

	printf("Size = %d", sizeof( variableA ));

    return 0; 
}
```

![Variable.png](/img/user/Data%20Structures%20in%20Cpp/Reference%20images/Variable.png)

> [!IMPORTANT] Important
> The **variable name** just exists for programming convenience and doesn't exist post-compilation, only its associated memory location address does.

---


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/data-structures-in-cpp/c-basics/c-c-defining-a-variable/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---

Before you use a variable, you have to define it.

Variable definition (sometimes also called a variable declaration) is nothing more than letting the compiler know you will need some memory space for your program data so it can reserve some.

- To define a variable, you only need to state its type, followed by a variable name.

> [! Tip] Syntax
	  `<data type> <variable_name>;`

_Example_
```c++
char mvExamScore;    // This is called variable definition
```


## Variable initialization

First define the variable, then initialize it with a value.

_Example_
```c++
char mvExamScore;    // Variable definition
myExamScore = 25;    // Variable initialization
```

_Example_
```c++
char mvExamScore = 25;    // Other form of Variable definition
```

</div></div>


---

<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/data-structures-in-cpp/c-basics/c-c-declaring-a-variable/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




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




</div></div>


---


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/data-structures-in-cpp/c-basics/c-c-rules-for-naming-a-variable/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---

- The variable name **shall not be more than 30 characters.** Some compilers might throw some errors.

- The variable name can **only contain alphanumerical characters and underscores.**

- The first letter of the variable **cannot be a digit**. It should either be an alphanumerical character or an underscore.

- You cannot use a [[Data Structures in Cpp/C++ Basics/C - Reserved keywords\|C - Reserved keywords]] as variable names.

</div></div>



