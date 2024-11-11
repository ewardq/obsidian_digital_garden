---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/double-quotes/"}
---

---
Double quotes tell the shell to take the text in between the quote marks _" "_ as regular characters. All special characters lose their meaning, except the ___$ (dollar sign)___, ___\ (backslash)___, and ___\` (backquote)___.

As an example, the command

```bash
$ touch new file
$ ls -l 
-rw-rw-r-- 1 tom students 0 Oct 8 15:18 file
-rw-rw-r-- 1 tom students 0 Oct 8 15:18 new
```
creates **two** files, as the `touch` command interprets two strings as individual arguments.

In contrast, the command

```bash
$ touch "new file"
$ ls -l 
-rw-rw-r-- 1 tom students 0 Oct 8 15:19 new file
```
creates **one** file, as it takes the whole string as one name, one argument.

The _special characters_ are unaffected by the double quotes, like in the following example:

```bash
$ echo I am $USER
I am tom 
$ echo "I am $USER" 
I am tom
```
Result on the same text, as the environment variable `$USER` gets interpreted the same in both cases.