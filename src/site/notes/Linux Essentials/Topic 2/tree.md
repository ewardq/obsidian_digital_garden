---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/tree/","noteIcon":"1"}
---

---
Name
tree - list contents of directories in a tree-like format.

> [! Tip] Syntax
> 	tree [-adfghilnopqrstuvxACDFNS] [-L level [-R]] [-H baseHREF] [-T title] [-o filename] [--nolinks] [-P pattern] [-I pattern] [--inodes] [--device] [--noreport] [--dirsfirst] [--version] [--help] [--filelimit #] [directory ...]


Description
Tree is a recursive directory listing program that produces a depth indented listing of files. Color is supported ala dircolors if the LS_COLORS environment variable is set, output is to a tty, and the -C flag is used. With no arguments, tree lists the files in the current directory. When directory arguments are given, tree lists all the files and/or directories found in the given directories each in turn. Upon completion of listing all files/directories found, tree returns the total number of files and/or directories listed.

By default, when a symbolic link is encountered, the path that the symbolic link refers to is printed after the name of the link in the format:

name -> real-path

If the '-l' option is given and the symbolic link refers to an actual directory, then tree will follow the path of the symbolic link as if it were a real directory.

Visualize all directories in a graphic.
```bash
tree directory
```
