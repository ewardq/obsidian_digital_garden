---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/object-oriented-data-structures-in-c/","dgPassFrontmatter":true}
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
### Let's see an example of a variable within a script

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

---

[[Data Structures in Cpp/Stack Memory\|Stack Memory]]