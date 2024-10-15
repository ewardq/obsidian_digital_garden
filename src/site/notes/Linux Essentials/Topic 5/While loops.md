---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/while-loops/","noteIcon":"1"}
---


---
### While loops

The code block will execute the lines or instructions within it **while** a condition is met. 

> [!Important] Syntax
> while <CONDITION>; do
>       INSTRUCTIONS
> done

Let's look at an example:
```bash
CONT=0
while [ $CONT -lt 5 ]; do
    echo The current state of the counter is $CONT
    CONT=$( ($CONT+1) )
done
```

Where the output will be:

Iteration   #CONT  Condition         Result
1             0    [ 0 -tl 5 ]  ✓    The current state of the counter is 0
2             1    [ 1 -tl 5 ]  ✓   The current state of the counter is 1
3             2    [ 2 -tl 5 ]  ✓   The current state of the counter is 2
4             3    [ 3 -tl 5 ]  ✓   The current state of the counter is 3
5             4    [ 4 -tl 5 ]  ✓   The current state of the counter is 4
6             5    [ 5 -tl 5 ]  X      <  Exits the loop >

