---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/cat/","noteIcon":"1"}
---

---
___Concatenate files and print on the standard output.___

> [! Tip] Syntax
	cat [OPTION]... [FILE]...

With no `FILE`, or when `FILE` is -, read standard input.

Output `f`'s contents, then standard input, then `g`'s contents.
```bash
cat f - g
```

Copy standard input to standard output.
```bash
cat
```