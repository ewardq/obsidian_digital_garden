---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/files-and-directories/","dgPassFrontmatter":true}
---

---
___Files___ contain data such as human-readable text, executable programs, or binary data that is used by the computer.

___Directories___ are used to create organization within the filesystem. Directories can contain files and other directories.


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/linux-essentials/topic-2/tree/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




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


</div></div>
