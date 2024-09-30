---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/read/","noteIcon":"1"}
---

---
___Read from a line from standard input or file descriptor.___

> [! Tip] Syntax
	 read [OPTIONS] [NAME...]

If we want to read and store an input from a user, we can use the command **read***.
```bash
#!/bin/bash
read variable1 variable2 variable3
echo The first value introduced is: $variable1
echo The second value introduced is: $variable2
echo The thrid value introduced is: $variable3
```

```bash
user@host:~$ ./script.sh value1 value2 value3
The first value introduced is: value1
The second value introduced is: value2
The thrid value introduced is: value3
```

But be careful when a user introduces more than the expected number of variables:
```bash
user@host:~$ ./script.sh value1 value2 value3 value4 value5
The first value introduced is: value1
The second value introduced is: value2
The thrid value introduced is: value3 value4 value5
```

Because the ___last variable will store the exceeding inputs.___
