---
{"dg-publish":true,"permalink":"/linux-essentials/objdump/"}
---

---
___Display information from object files___

> [! Tip] Syntax
	objdump [selection]

 **objdump** displays information about one or more object files.  The options control what particular information to display.  This information is mostly useful to programmers who are working on the compilation tools, as opposed to programmers who just want their program to compile and work.

_objfile_... are the object files to be examined.  When you specify archives, **objdump** shows information on each of the member object files.