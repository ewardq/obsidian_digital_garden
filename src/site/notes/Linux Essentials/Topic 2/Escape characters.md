---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/escape-characters/","noteIcon":""}
---

---
We can use _escape characters_ to remove special meaning of characters from Bash. Like in the following example:

```shell
$ echo $USER
carol
```
where the `$USER` text gets interpreted as an environment variable. We can print the literal text if we add a _backslash_ character ( \ ) before the string.

```shell
$ echo \$USER
$USER
```
where the `echo` command prints the text as is.