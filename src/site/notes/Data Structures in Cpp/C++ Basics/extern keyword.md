---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/extern-keyword/"}
---

---
The `extern` storage class specifier is used to ==access a global variable defined outside the scope of a file.==

`extern` storage class specifier can also be used during the function call, when the function is defined outside the scope of the file.

The keyword `extern` is relevant **only when your project consists of multiple files** and you need to access a variable defined in one file from another file.
- `extern` keyword is used to extend the visibility of a function or variable.

If we have a C project with two or more files, we might want use a global variable defined in another file from our current file.

_main.c_ 
```c++
#include <stdio.h>

void file1_func(void);

int mainPrivateData;

int main(){
    mainPrivateData = 100;
    printf("mainPrivateData = %d\n", mainPrivateData);

	file1_func();
	printf("mainPrivateData = %d\n", mainPrivateData);
    return 0;
}
```

_file1.c_
```c++
extern int mainPrivateData;

void file1_func(void){
	mainPrivateData = 900;
}
```

_output_
```c++
mainPrivateData = 100
mainPrivateData = 900
```

Here we can access and modify global variables from another file using the `extern` keyword.