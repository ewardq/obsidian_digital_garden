---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/rm/","noteIcon":"1"}
---

---
Name: mv - move (rename) files

> [! Tip] Syntax
	mv [OPTION]... [-T] SOURCE DEST
	mv [OPTION]... SOURCE... DIRECTORY
	mv [OPTION]... -t DIRECTORY SOURCE...

Description
Rename SOURCE to DEST, or move SOURCE(s) to DIRECTORY.

Remove file
```bash
rm file
```

If we try to remove a directory using the previous syntax, we get an error:
```bash
rm directory/

rm: can't delete 'directory/': It's a directory
```

The solution is to delete **recursively**. It is important to note that this should be used very carefuly as this has the potential of harming the system as a whole.

Remove directory
```bash
rm -r directory/
```
