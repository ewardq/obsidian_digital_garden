---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/conditional-operator/"}
---

---
In C++, the ***ternary*** or ***conditional operator ( ? : )*** is the shortest form of writing conditional statements. It can be used as an inline conditional statement in place of if-else to execute some conditional code.  [^1]
## Syntax of conditional operator

```c++
expression1 ? expression2 : expression3
```
Where _expression1_ is evaluated and if TRUE, _expression2_ will be executed, if FLASE _expression3_ will be executed instead.

As an example:
```c++
int a = 3;
int b = 10;

int greater_val = (a > b) ? a : b; 
```
Where `greater_val` will be assigned the variable with the highest value.

[^1]: [C++ Ternary or Conditional Operator - GeeksforGeeks](https://www.geeksforgeeks.org/cpp-ternary-or-conditional-operator/)