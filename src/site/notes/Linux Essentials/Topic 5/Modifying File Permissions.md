---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/modifying-file-permissions/","noteIcon":"1"}
---

---
There are three types of file permissions: `read`, `write`, `execute` . File permissions can be changes with the command [[Linux Essentials/Topic 5/chown\|chown]].

```bash
user@host:~/directory$ ls -l
total 24
-rw-rw-rw- 1 user  user   52 Jun 4 10:24 write-read-file.txt
-r--r--r-- 1 user  user   48 Jun 4 10:15 read-only-file.txt
---------- 1 user  user   51 Jun 4 10:23 secret-file.txt
---x--x--x 1 user  user    0 Jun 4 10:40 executable.sh
drwxr-xr-x 4 user  user 4096 Jun 4 11:34 documents
drwxr-xr-x 4 tux  users 4096 Dec 9 12:25 photos
```

- `r` or `read` means that the content is accesible to the user.
- `w` or `write` means that the content of the file can be modifying.
- `x` or `execute` means that the file can be executed. Mostly used for scripts.
