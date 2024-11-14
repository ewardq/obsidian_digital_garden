---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/single-quotes/"}
---

---
Single quotes don't have the exceptions of the double quotes. They revoke any special meaning from each character. 

For instance, the command
```shell
$ echo I am $USER
I am tom
```
shows the value of the environment variable `$USER`

In contrast, the command
```shell
$ echo 'I am $USER'
I am $USER
```
shows the text `I am $USER` as is.