---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/if-else-if-ladder/"}
---

---
In this conditional, the first expression is evaluated, if that is FALSE, the second expression is then evaluated if that one is also FALSE, the third, and so on. 

If all of the statements are evaluated to FALSE, then the default statement is executed.
## Ladder statements

```c++
if (expression_1){          // First evaluate this
	statement_;
}
else if (expression_2){    // If frist statement is FALSE, then
	statement_;            // evaluate this
}
else if (expression_3){    // If frist statement is FALSE, then
	statement_;            // evaluate this
}

...

else{                         // Default statement
	statement_;
}
```
