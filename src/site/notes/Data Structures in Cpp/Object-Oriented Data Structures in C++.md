---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/object-oriented-data-structures-in-c/"}
---

---
Every C++ variable has four things:

```c++
int primeNumber = 7;
```

- A name --  `primeNumber`
- A type -- `int`
- A value -- `7` 
- A location in memory (memory address) -- `0x7fffc59ca388`

---
### Let's see an example of a [[Data Structures in Cpp/C++ Basics/variable\|variable]] within a script

`cpp-memory/addressOf.cpp`
```c++
#include <iostream>

int main(){
	int num = 7;

	std::cout << "Value: " << num << std::endl;
	std::cout << "Adress: " << &num << std::endl;

	return 0;
}
```

Here, we are able to access the **address** can be access making use of a _calling by reference_ `&num`

You can also see the size of a variable with the [[Data Structures in Cpp/C++ Basics/sizeof()\|sizeof()]] command.

---

[[Data Structures in Cpp/C++ Basics/Stack Memory\|Stack Memory]]