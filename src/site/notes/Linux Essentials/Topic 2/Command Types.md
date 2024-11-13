---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/command-types/","dgPassFrontmatter":true}
---

---
What happens when I execute a command?

```bash
ls
```

There are some commands that are just executable files inside the disk that the system calls.

But there are some commands that are **inside** the command interpreter _do not need any file to be executed._
This commans are executed in memory.

How can I know which type of command am I executing?
Using `type`

```bash
type cd

type is an internal command of bash
```
this means that `cd` is a command that runs in memory and is not located on a separate file.

```bash
type ls

ls is an alias of 'ls --color=auto'
```
here, `ls` is actualy an [[alias\|alias]]; this means that when the `ls` is called, `ls --color=auto` is executed instead like a macro.

but where is this command actually stored in disk? It's location can be found using:
```bash
whereis ls

ls: /usr/bin/ls /usr/share/man/man1/ls.1.gz
```
where we can see that the ls command is stored in the binary folder `/usr/bin/ls`

If we try the same command with an internal command like `cd`
```bash
whereis cd

cd:
```
