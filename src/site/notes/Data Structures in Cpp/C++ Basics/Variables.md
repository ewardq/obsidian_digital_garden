---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/variables/"}
---

---

Variables are **identifiers for your data.**

- Data is usually stored in computer memory.
- So, a variable acts as a label to a memory location where the data is stored.
- **Variable names are not stored inside the computer memory**, and the [[C - Compiler Process \| compiler]] replaces them with memory location addresses during data manipulation.

```c++
#include <stdio.h>

int main(){
	\\ variableA and variableB are variables of type char
    char variableA = 20;
    char variableB = 30;

	printf("Size = %d", sizeof( variableA ));

    return 0; 
}
```

![Variable.png](/img/user/Data%20Structures%20in%20Cpp/Reference%20images/Variable.png)

> [!IMPORTANT] Important
> The **variable name** just exists for programming convenience and doesn't exist post-compilation, only its associated memory location address does.
