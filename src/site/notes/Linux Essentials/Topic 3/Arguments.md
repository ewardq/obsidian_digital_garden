---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/arguments/","noteIcon":"1"}
---

---
Arguments are the information the user inputs upon calling a command, like `rm testfile`. Arguments can be passed to the script  upon execution, and will modify how the script behaves.

- This arguments are separated by spaces `" "`

From within the script we can make use of predefined [[Linux Essentials/Topic 2/Variables\|variables]] by the system:

| Predefined variables | Description                                                                                                                                                                                                               |
| -------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `$n`                 | **A particular parameter** passed by the user upon calling the command. "`n`" represents the parameter number.                                                                                                            |
| `$*`                 | All of the parameters. They are represented in a single **array of parameters**.                                                                                                                                          |
| `$_`                 | Initially, it holds the absolute path of the script or shell being invoked. However, **its value changes after each command execution.** [Learn more](https://www.baeldung.com/linux/shell-special-dollar-sign-variables) |
| `$@`                 | All of the parameters. This is a **list** with each element being the input arguments.                                                                                                                                    |
| `$#`                 | This is the **number of characters** inputted by the user upon calling the command.                                                                                                                                       |

### How to use them

Here's an example on how to use the `$n`, `$#` and `$*` variables.

___shell_script.sh___
```bash
#!/bin/bash
echo The first parameter is $1
echo The number of parameters is $#
echo A list of all of the parameters: $*
```

```bash
user@host:~$ ./shell_script.sh parameter1 parameter2 parameter3
The first parameter is parameter1
The number of parameters is 3
A list of all of the parameters: parameter1 parameter2 parameter3
```