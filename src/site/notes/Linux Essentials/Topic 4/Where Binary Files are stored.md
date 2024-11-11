---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/where-binary-files-are-stored/"}
---

---
Executable files live in directories hanging ultimately from _/_. More specifically, programs are distributed across a three-tier structure: the first tier _/_ includes programs that can be necessary in single-user mode, the second tier _/user_ contains most multi-super programs and the third tier _/usr/local_ is used to store software that is not provided by the distribution and has been compiled locally.

_/sbin_ It contains essential binaries for system administration such as `parted` or `ip`.

_/bin_ It contains essential binaries for all users such as `ls`, `mv`, or `mkdir`

_/usr/sbin_ It stores binaries for system administration such as `deluser`, or `groupadd`.

_/usr/bin_ It includes most executable files - such as `free`, `pstree`, `sudo` or `man` - that can be used by all users.

_/usr/local/sbin_ It is used to store locally installed programs for system administration that are not managed by the system's package manager.

_/usr/local/sbin_ It serves the same purpose as `/usr/local/sbin` but for regular user programs. 

Recently some distributions started to replace `/bin` and `/sbin` with symbolic links to `/usr/bin` and `/usr/sbin`.