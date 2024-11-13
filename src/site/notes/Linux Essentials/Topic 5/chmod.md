---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/chmod/","dgPassFrontmatter":true}
---

---
___Change file mode bits___

> [!Important] Syntax
> chmod [OPTION]... MODE[,MODE]... FILE...
chmod [OPTION]... OCTAL-MODE FILE...
chmod [OPTION]... --reference=RFILE FILE...

**chmod** changes the file mode bits of each given file according to _mode_, which can be either a symbolic representation of changes to make, or an octal number representing the bit pattern for the new mode bits.

---
### Octal note
A widely used, often shorter, form of calling [[Linux Essentials/Topic 5/chmod\|chmod]] is by use of the octal notation. This is a combination of three numbers by which we can represent all combinations of access rights.

The following table shows the equivalent octal and symbolic notations:
```bash
r/w/x | binary | octal
 ---  |  000   |   0
 --x  |  001   |   1
 -w-  |  010   |   2
 -wx  |  011   |   3
 r--  |  100   |   4
 r-x  |  101   |   5
 rw-  |  110   |   6
 rwx  |  111   |   7
```
