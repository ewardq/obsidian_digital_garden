---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/man/"}
---

---
Most commands provide a manual page or “man” page. This documentation is usually installed with the software and can be accessed with the man command. 

```bash
man mkdir
```
This command shows the man page for `mkdir`. 

Each man page is divided in maximum of 11 sections, some are optional:

| Section     | Description                               |
| ----------- | ----------------------------------------- |
| NAME        | Command name and brief description        |
| SYNOPSIS    | Description of the command's syntax       |
| DESCRIPTION | Description of the effects of the command |
| OPTIONS     | Available options                         |
| ARGUMENTS   | Available arguments                       |
| FILES       | Auxiliary files                           |
| EXAMPLES    | A sample of the command line              |
| SEE ALSO    | Cross-references to the related topics    |
| DIAGNOSTICS | Warnings and Error messages               |
| COPYRIGHT   | Author(s) of the command                  |
| BUGS        | Any known limitations of the command      |

Man pages are organized in eight categories, numbered from 1 to 8:

| Category | Description                          |
| -------- | ------------------------------------ |
| 1        | User command                         |
| 2        | System calls                         |
| 3        | Functions of the C library           |
| 4        | Drivers and device files             |
| 5        | Configuration files and file formats |
| 6        | Games                                |
| 7        | Miscellaneous                        |
| 8        | System administrator commands        |
| 9        | Kernel functions (not standard)      |
|          |                                      |
