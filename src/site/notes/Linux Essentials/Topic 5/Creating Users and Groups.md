---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/creating-users-and-groups/","noteIcon":"1"}
---

---
Linux is a multi-user operating system in which multiple users can use the same machine at the same time.

Information about users and groups is stored in four files within the `/etc/`  directory tree:

| Directory                              | Description                                                                          |
| -------------------------------------- | ------------------------------------------------------------------------------------ |
| [[Linux Essentials/Topic 5/The file etc-passwd\|/etc/password]] | A file of seven colon-delimited fields containing basic **information about users**. |
| [[Linux Essentials/Topic 5/The file etc-group\|/etc/group]]     | A file of four colon-delimited fields containing basic **information about groups.** |
| [[Linux Essentials/Topic 5/The file etc-shadow\|/etc/shadow]]   | A file of nine colon-delimited fields containing **encrypted user passwords.**       |
| [[Linux Essentials/Topic 5/The file etc-gshadow\|/etc/gshadow]] | A file of four colon-delimited fields containing **encrypted group passwords.**      |


> [!Warning] Warning
> Even though the files are plain text, do not edit them directly. Always use the tools provided with your distribution for this purpose.
