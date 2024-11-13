---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/stack-memory/","dgPassFrontmatter":true}
---

---
By default, every variable in C++ is placed in **stack memory**.

Stack memory is associated with the ___current function___ and the memory's lifecycle is tied to the function:

- When the function returns or ends, the stack memory of that function is released.

### Stack Memory 

Stack memory always starts from high addresses and grows down:

![MemoryAddress.png](/img/user/Data%20Structures%20in%20Cpp/Reference%20images/MemoryAddress.png)

