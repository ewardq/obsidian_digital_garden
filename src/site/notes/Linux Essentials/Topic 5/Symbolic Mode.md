---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/symbolic-mode/","dgPassFrontmatter":true}
---

---
When describing which permissions to change in _symbolic mode_ the first character(s) indicate(s) whose permissions you will alter: the ones for the user (`u`), for the group (`g`), for others (`o`) and/or for all the three together (`a`). 

Then you need to tell the command what to do: you can grant a permission (`+`), revoke a permission (`-`), or set it to a specific value (`=`).

Lastly, you specify which permission you wish to affect: read (`r`), write (`w`), or execute (`x`).

For example, imagine we have a file called `text.txt` with the following permissions set:

```bash
$ ls -l text.txt
-rw-r--r-- 1 carol carol 765 Dec 20 21:25 tex.txt
```

#Need_Citation 