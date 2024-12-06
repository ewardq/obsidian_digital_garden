---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/c-c-local-variables/"}
---

---

==Scope:== Within the body of the function. Local variables lose existence once the execution control comes out of the function body.

==Default value:== Unpredictable (garbage value).

==Lifetime:== Till the end of the execution of a function in which a variable is defined.

_Example_
```c++
#include <stdio.h>

void myFunc(void){
	int myVariable;  // Declaration of a local variable
	return 0;
}

int main(){

	printf("The variable has the value of %d", myVariable);
	return 0;
}
```

_Output_
```c++
main.c: In function ‘myFunc’:
main.c:13:16: warning: ‘return’ with a value, in function returning void
   13 |         return 0;
      |                ^
main.c:11:6: note: declared here
   11 | void myFunc(void){
      |      ^~~~~~
main.c: In function ‘main’:
main.c:18:52: error: ‘myVariable’ undeclared (first use in this function)
   18 |         printf("The variable has the value of %d", myVariable);
      |                                                    ^~~~~~~~~~
main.c:18:52: note: each undeclared identifier is reported only once for each function it appears in
```
The `main()` function can't access the local variable created in the `myFunc()` function scope.
