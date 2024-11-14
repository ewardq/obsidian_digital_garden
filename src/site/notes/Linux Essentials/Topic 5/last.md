---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/last/"}
---

---
___Show listing of last logged in users___

> [!Important] Syntax
	last [-R] [-num] [ -n num ] [-adFiowx] [ -f file ] [ -t YYYYMMDDHHMMSS ] [name...] [tty...]


> [!Important] Syntax
	lastb [-R] [-num] [ -n num ] [ -f file ] [-adFiowx] [name...] [tty...]

**Last** searches back through the file `/var/log/wtmp` (or the file designated by the **-f** flag) and displays a list of all users logged in (and out) since that file was created. Names of users and tty's can be given, in which case **last** will show only those entries matching the arguments. Names of ttys can be abbreviated, thus **last 0** is the same as **last tty0**.