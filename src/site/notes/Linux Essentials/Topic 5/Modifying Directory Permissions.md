---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/modifying-directory-permissions/"}
---

---
Directories, marked by `d`, also have three types of file permissions: `read`, `write`, `execute` ; but they signal different behavior from file permissions. This permissions can be changed using the [[Linux Essentials/Topic 5/chown\|chown]] command.

```bash
user@host:~/directory$ ls -l
total 24
dr-xr-xr-x 2 user users 4096 Apr 4 12:42 list_files_on_dir
d-wx-wx-wx 2 user users 4096 Apr 4 12:21 modify_dir_content
d--------- 2 user users 4096 Apr 4 12:24 secret_directory
```

- `r` or `list` means that the content of the directory can be listed (files an subdirectories).
- `w` or `modify` means that elements may be added or deleted from the directory.
- `x` or `access` means that the directory can be entered (usually with [[cd\|cd]]).
