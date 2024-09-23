---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/cp/","noteIcon":"1"}
---

---
NAME
       cp - copy files and directories


> [! Tip] Syntax
       cp [OPTION]... [-T] SOURCE DEST
       cp [OPTION]... SOURCE... DIRECTORY
       cp [OPTION]... -t DIRECTORY SOURCE...

DESCRIPTION
       Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.

       Mandatory arguments to long options are mandatory for short
       options too.

Copy file
```bash
cp logo-ubuntu.gif logo-ubuntu.gif.copy
```

Copy to a different directory with the same name
```bash
cp logo-ubuntu.gif /home/user/targetDirectory/
```

Copy directories. For this we need the `-r` option to copy all files on the directory.
```bash
cp -r directory_to_copy/ destination_directory/
```

Copy a file from root so other user can use it.
```bash
cp root-file copy_of_root_file
```
With this, the user will have ownership of the copy.