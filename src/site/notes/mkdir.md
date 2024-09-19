---
{"dg-publish":true,"permalink":"/mkdir/","noteIcon":"1"}
---

---
Name: mkdir - make directories
Synopsis
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