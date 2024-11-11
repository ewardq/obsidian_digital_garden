---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/touch/"}
---

---
Name: touch - change file timestamps

> [! Tip] Syntax
	touch [OPTION]... FILE...

Description
Update the access and modification times of each FILE to the current time.

A FILE argument that does not exist is created empty, unless -c or -h is supplied.

A FILE argument string of - is handled specially and causes touch to change the times of the file associated with standard output.


Make an empty file
```bash
touch newFile
```