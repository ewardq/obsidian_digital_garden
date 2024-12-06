---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/function-prototype-declaration/"}
---

---

In **C**, ==functions first have to be declared before they are used.==

```C++
#include <stdio.h>

int myFunctionPrototype(int x, char chr, float num);

int main(){
	int OperationResult;
	OperationResult = myFunctionPrototype(32, 'C', 34.2);
	return 0;
}

int myFunctionPrototype(int x, char chr, float num){
 // do some stuff
 return result;
}
```

A prototype let's the compiler know about:
- The _return_ data type. >> `int`
- The _arguments_ list (and their data type). >> `int x`, `char chr`, `float num`
- The _order of arguments being passed_ to the function. >> First an `int`, then a `char` and finally a `float` 