---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/mkdir/","dgPassFrontmatter":true}
---

---
Name: mkdir - make directories

> [! Tip] Syntax
	mkdir [OPTION]... DIRECTORY...

Description
Create the DIRECTORY(ies), if they do not already exist.

Make a directory in the current directory
```bash
mkdir newDirectory
```

Make a directory in a specific directory
```bash
mkdir currentDirectory/subDirectory/newDirectory
```

Make a subdirectory in a directory that does not exists.
```bash
mkdir -b newDirectory/newSubdirectory/newSubSubDirectory
```