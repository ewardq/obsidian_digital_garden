---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-standard-library-std/","noteIcon":"1"}
---

---
The **C++ standard library** (std) provides a set of commonly used functionality and data structures to build upon.

```c++
using namespace std;
```

### Standard Library Organization

The C++ standard library is organized into many separate sub-libraries that can be `#include`'d in any C++ program.


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/data-structures-in-cpp/iostream/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




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

</div></div>

