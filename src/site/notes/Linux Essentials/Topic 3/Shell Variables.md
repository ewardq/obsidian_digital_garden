---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/shell-variables/","dgPassFrontmatter":true}
---

---
Shell [[Linux Essentials/Topic 2/Variables\|Variables]] are used to store information and access them later.
- To name them we can use alfanumeric characters or underscore `_` but they cannot start with a number.
- Case sensitive. `$VAR` is no the same as `$var`

### Read/write variables
To store data in a variable, just assign it a value using the equal `=` sign **without the dollar sign ($)**.

```bash
variable="Store this value"
```

>[!Important]
>Remember to **not use any spaces when assigning a value to a variable**

To access them, use the dollar sign `$` followed by it's identifier:
```bash
echo $variable
```

or curly brackets `{}`
```bash
echo ${variable}
```

---
### How to use them

Here's an example on how to declare, assign a value and call a variable in a script.

___shell_script.sh___
```bash
#!/bin/bash
var1="Hello"
echo $var1 World
```

```bash
user@host:~$ ./shell_script.sh
Hello World
```

