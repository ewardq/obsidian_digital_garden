---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/static-keyword/"}
---

---
## `static` storage duration [keyword]

This keyword can be used to declare a local variable with `static` storage duration.

The keyword `static` applied to a class data member in a class definition gives the data member static storage duration.

It is usually seen in two places:
1. A static variable inside a function keeps it's value between invocations.
2. A static global variable or function is "seen" only in the file in which it's declared.

## 1. A static variable inside a function keeps it's value between invocations.

Let's try to print the number of times a function was called using a counter `count`.

```c++
#include <stdio.h>

void myFun(void){
	int count = 0;
	count = count + 1;
	printf("This function executed %d time(s)\n", count);
}

int main(){
    myFunc();    // Function call #1
    myFunc();    // Function call #2
    myFunc();    // Function call #3
    return 0;
}
```

_output_
```c++
This function executed 1 time(s)
This function executed 1 time(s)
This function executed 1 time(s)
```

This is happening because each time the function is called, the variable `count` does not retain it's value. 
Now, let's try using the keyword `static` to make give this variable static storage.

```c++
#include <stdio.h>

void myFun(void){
	static int count = 0;
	count = count + 1;
	printf("This function executed %d time(s)\n", count);
}

int main(){
    myFunc();    // Function call #1
    myFunc();    // Function call #2
    myFunc();    // Function call #3
    return 0;
}
```

_output_
```c++
This function executed 1 time(s)
This function executed 2 time(s)
This function executed 3 time(s)
```

Now the variable retained it's value!

## 2. A static global variable or function is "seen" only in the file in which it's declared.

If we want a global variable that it's ==private== to a function but it is also a variable that does not lose its existence even if the execution control goes out of the scope of that variable, we use the keyword `static`.

If we have a C project with two or more files, we might want to declare a global variable with limited scope, like this:

_main.c_ 
```c++
#include <stdio.h>

void file1_func(void);

static int mainPrivateData;

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
/tmp/ccwCorz.o: IN function 'file1_func':
file1.c:(.text+0x6): undefined reference to 'mainPrivateData'
collect2: error: 1d returned 1 exit status
```

Here we get an error because the `file1_func( )` function can't access the _main.c_ private variable `mainPrivateData` and therefore can't change it.