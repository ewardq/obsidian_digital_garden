
---

If we want to increment the address of a pointer, we can make use of both the uniary operator `++` and the binary operator `+`

_Increment the address of a pointer using +_
```C++
uint32_t* pAddress = (uint32_t*) 0xFFFF0000;

pAddress = pAddress + 1;    // Aritmethic add
```
_result_
```C++
pAddress = 0xFFFF0004
```

_Increment the address of a pointer using ++_
```C++
uint32_t* pAddress = (uint32_t*) 0xFFFF0000;

pAddress++;    // Unary increment
```
_result_
```C++
pAddress = 0xFFFF0004
```