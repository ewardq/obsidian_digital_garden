---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/functions-in-c/"}
---

---

In **C**, executable statements are written inside a function.
==A C function is no more than a collection of statements to perform a specific task.==

- Every C program has at least one function called `main()`
- Bring [[modularity\|modularity]] to your code with the use of functions.
- Using functions to break down the functionality of a program can make it **easier to debug, modify and it increases the maintainability of the code.**
- Minimize code size and redundancy.
- Provide [[abstraction\|abstraction]] with the use of functions.

---


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/data-structures-in-cpp/c-basics/function-prototype-declaration/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




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

</div></div>

