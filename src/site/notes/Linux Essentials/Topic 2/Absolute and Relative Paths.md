---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/absolute-and-relative-paths/"}
---

---
An **absolute path** contains every step of the path, from the top of the filesystem (`/`) to the bottom (`Reports`). 

```bash
user@hostname ~ $ cd /home/user/Documents
user@hostname ~/Documents $ pwd
/home/user/Documents
```

A command that always prints an absolute path is `pwd`

```bash
pwd
/
└── home
  └── user
  └── Documents
  └── Reports
```

But this path is long and tedious to type, that's why the **relative path** exists.

```bash
user@hostname ~/Documents $ cd Reports
user@hostname ~/Documents/Reports $ pwd
/home/user/Documents/Reports
```

---

### Special Relative Paths
The Linux shell has ways to make changing directories even easier. These are the **current and parent directory**.

To see these directories, we use the `ls -a` command to reveal all files on the current directory, even the hidden ones.

```bash
user@hostname ~/Documents/Reports $ ls -a
.
..
report2018.txt
```
here the two special relative paths are relealed:

`.`
Indicates the **current location** (in this case, `Reports`).
`..`
Indicates the **parent directory** (in this case, `Documents`)