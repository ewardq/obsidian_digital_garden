---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/for-loops/","noteIcon":"1"}
---


---
### For loops

The code block will execute the lines or instructions within it **until** it finishes the elements of a list.

**Syntax**
``` bash
for <VARIABLE> in <LIST>; do
	INSTRUCTIONS
done
```

Let's look at an example:
```bash
for i in $( seq 5 8 ); do
    echo variable i = $i
done
```

Where the output will be:

| Iteration | `$i` | Result         |
| --------- | ---- | -------------- |
| 1         | 0    | variable i = 5 |
| 2         | 1    | variable i = 6 |
| 3         | 2    | variable i = 7 |
| 4         | 3    | variable i = 8 |
