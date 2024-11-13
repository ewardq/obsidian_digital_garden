---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/math-operations/","dgPassFrontmatter":true}
---

---
___Operate with numbers!___

| Operator | Description                         | Example                                                        |
| -------- | ----------------------------------- | -------------------------------------------------------------- |
| `+`      | Addition                            | `echo 1+1` outputs `1+1`<br><br>`echo $(( 1 + 1))` outputs `2` |
| `-`      | Substraction                        | `echo $(( 1 - 1))` outputs `0`                                 |
| `*`      | Multiplication                      | `echo $(( 2 * 5))` outputs `10`                                |
| `/`      | Division                            | `echo $(( 4 / 2))` outputs `2`                                 |
| `%`      | Modulo                              | `echo $(( 16 % 3))` outputs `1`                                |
| `+=`     | Increment by constant               | `x = 5`<br>`x+= 2`<br>outputs `7`                              |
| `-=`     | Decrement by constant               | `x = 5`<br>`x-= 2`<br>outputs `3`                              |
| `*=`     | Multiply by constant                | `x = 5`<br>`x*= 2`<br>outputs `10`                             |
| `/=`     | Divide by constant                  | `x = 5`<br>`x/= 2`<br>outputs `2.5`                            |
| `%=`     | Remainder by dividing with constant | `x = 5`<br>`x%= 2`<br>outputs `1`                              |
| `**`     | Exponentiation                      | `echo $(( 5 ** 2))` outputs `25`                               |
