---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/understanding-permissions/","noteIcon":"1"}
---

---
In the output of `ls -l` the file permissions are shown right after the filetype, as three groups of three characters each, in the order r, w and x. Here is what they mean. Keep in mind that a dash represents the lack of a particular permission.

---
### Permissions on Files

| Permission | Description                                                                                                           |
| ---------- | --------------------------------------------------------------------------------------------------------------------- |
| `r`        | Stands for _read_ and has an [[Linux Essentials/Topic 5/chmod\|octal value]] of 4. This means permission to open a file and read its contents. |
| `w`        | Stands for _write_ and has an octal value of 2. This means permission to edit or delete a file.                       |
| `x`        | Stands for _execute_ and has an octal value of 1. This means that the file can be run as an executable or script.     |

---
### Permissions on Directories

| Permission | Description                                                                                                                                                                                                                                                                                                                                                              |
| ---------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| `r`        | Stands for _read_ and has an octal value of 4. This means permission to read the directory’s contents, like filenames. But it does not imply permission to read the files themselves.                                                                                                                                                                                    |
| `w`        | Stands for _write_ and has an octal value of 2. This means permission to create or delete files in a directory, or change their names, permissions and owners. If a user has the write permission on a directory, the user can change permissions of any file in the directory, even if the user has no permissions on the file or if the file is owned by another user. |
| `x`        | Stands for _execute_ and has an octal value of 1. This means permission to enter a directory, but not to list its files (for that, the r permission is needed)                                                                                                                                                                                                           |



#Need_Citation 