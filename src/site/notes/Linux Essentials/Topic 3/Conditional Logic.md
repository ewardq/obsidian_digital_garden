---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/conditional-logic/","noteIcon":"1"}
---

---
Conditional operations have the objective to check if an expression is true or false.

To check something like this, you might want to use the command [[Linux Essentials/Topic 3/test\|test]]
```bash
test 10 -gt 20
test 'hello' = 'hellow'
test -d /etc/
```

Or within a bash script.
```bash
[ 10 -gt 20 ]
[ 'hello' = 'hellow' ]
[ -d /etc/ ]
```

The **syntax** of conditional logic in bash differs from other programming languages. 

| Syntax | Description                   |
| ------ | ----------------------------- |
| `-ne`  | _!=_ Not equal to             |
| `-gt`  | _>_ Greater than              |
| `-ge`  | _>=_ Greater than or equal to |
| `-lt`  | _<_ Less than                 |
| `-le`  | _>=_ Less than or equal to    |

### The IF conditional 
Execute one or more instructions **only if** a condition is met

> [!Tip] Syntax
> 	if CONDITION; then
> 			commands
> 	fi

Example:

```bash
if [ $v1 -gt $v2 ]; then
	echo "The variable v1 is bigger than the variable v2"
fi
```