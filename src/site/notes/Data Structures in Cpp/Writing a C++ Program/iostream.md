---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/writing-a-c-program/iostream/","dgPassFrontmatter":true}
---

---
The **iostream header includes operations for reading/writing to files and the console itself, including 

```c++
std::cout
```

Here's a simple use of the _cout_ command:

`cpp-std/cout.cpp`
```c++
#include <iostream>

int main(){
	std::cout << "Hello, world!" << std::endl;
	return 0;
}
```