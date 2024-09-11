---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/locating-files/","noteIcon":""}
---

---
You can use the local database to locate elements in the disk using the command `locate`, this database automatically updates but it can be manually updated with **updatedb**.

```bash
$ locate passwd
/usr/share/man/zh_CN/man1/gpasswd.1.gz
/usr/share/man/zh_CN/man1/passwd.1.gz
/usr/share/man/zh_CN/man5/gpasswd.5.gz
/usr/share/man/zh_CN/man8/chpasswd.8.gz
.
.
.
```

---
### Change Directory (cd) command
The `cd` command is used to change the actual or work directory from where the next command will execute.

_Change to home directory (from current user)_
```bash
user@host:~/home_files/directory1/subdirectory$ cd ~
user@host:~$ 
```

_Change to previous directory_
```bash
user@host:~$ cd /home_files/directory1/subdirectory
user@host:~/home_files/directory1/subdirectory$ cd ~/home_files/directory2
user@host:~/home_files/directory2$ cd -
user@host:~/home_files/directory1/subdirectory$
```

_Change to parent directory_
```bash
user@host:~/home_files/directory1/subdirectory$ cd ..
user@host:~/home_files/directory1$
```

---
### List command (ls)
The `ls` command is used to show the content of one or several directories.

- -l
- -h
- -S
- -r
- -t