---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/sizeof/"}
---

---

The **sizeof** operator of the C programming language is used to find out the size of a variable.

The output of the **sizeof** operator may be different on different machines because it is compiler dependent.

Let's se an example of it's use:

```c++
#include <stdio.h>
int main(){
    printf("Size of char data type = %d", sizeof(char));
    printf("Size of short data type = %d", sizeof(short));
    printf("Size of int data type = %d", sizeof(int));
    printf("Size of long data type = %d", sizeof(long));
    printf("Size of long long data type = %d", sizeof(long long));
    return 0;                 // Success!
}
```

Output:

```
Size of char data type = 1
Size of short data type = 2
Size of int data type = 4
Size of long data type = 8
Size of long long data type = 8
```