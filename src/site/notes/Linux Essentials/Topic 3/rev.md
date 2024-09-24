---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/rev/","noteIcon":"1"}
---

---
___Reverse lines of a file or files.___

> [! Tip] Syntax
	rev [FILE...]


The **rev** utility copies the specified files to the standard output, reversing the order of characters in every line. If no files are specified, the standard input is read.

### Why use rev?

Let's say you want to get the name of all files of the configuration directory (etc).

```bash
find /etc/ -maxdepth 4 -type f -exec echo "{}" \;
```
![Pasted image 20240924100506.png](/img/user/Linux%20Essentials/Topic%203/Reference%20images/Pasted%20image%2020240924100506.png)

Your first instinct might be to cut the last part of each line but that varies between file to file; sometimes it's the third position, the second or even the forth.

To fix this, use the `rev` command to make the file on the last position, the first.

```bash
find /etc/ -maxdepth 4 -type f -exec echo "{}" \; | rev
```
![Pasted image 20240924101124.png](/img/user/Linux%20Essentials/Topic%203/Reference%20images/Pasted%20image%2020240924101124.png)

Then, cut so only the first element is present using [[cut\|cut]].

```bash
find /etc/ -maxdepth 4 -type f -exec echo "{}" \; | rev | cut -d"/" -f1
```
![Pasted image 20240924101423.png](/img/user/Linux%20Essentials/Topic%203/Reference%20images/Pasted%20image%2020240924101423.png)

Finally, revert again so the order of the files is the same from the original list.
```bash
find /etc/ -maxdepth 4 -type f -exec echo "{}" \; | rev | cut -d"/" -f1 | rev
```

__And there you have it! A list of files from a set of subdirectories.___