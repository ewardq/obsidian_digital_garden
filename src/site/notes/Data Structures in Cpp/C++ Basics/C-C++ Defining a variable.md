---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/c-c-defining-a-variable/"}
---

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