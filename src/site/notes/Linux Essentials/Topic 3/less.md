---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/less/","noteIcon":"1"}
---

---
___Oposite of more___

> [! Tip] Syntax
	 less -?
       less --help
       less -V
       less --version
       less [-[+]aABcCdeEfFgGiIJKLmMnNqQrRsSuUVwWX~]
            [-b space] [-h lines] [-j line] [-k keyfile]
            [-{oO} logfile] [-p pattern] [-P prompt] [-t tag]
            [-T tagsfile] [-x tab,...] [-y lines] [-[z] lines]
            [-# shift] [+[+]cmd] [--] [filename]...
       (See the OPTIONS section for alternate option syntax with long

**Less** is a program similar to [[Linux Essentials/Topic 3/more\|more]], but which allows backward movement in the file as well as forward movement.  Also, **less** does not have to read the entire input file before starting, so with large input files it starts up faster than text editors like [[Linux Essentials/Topic 3/vi\|vi]].