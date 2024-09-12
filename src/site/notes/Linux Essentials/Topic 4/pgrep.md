---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/pgrep/","noteIcon":"1"}
---

---
**pgrep** looks through the currently running processes and lists the process IDs which match the selection criteria to _stdout_.  All he criteria have to match.  For example,

`$ pgrep -u root sshd`
will only list the processes whose name include **sshd** AND owned by **root**.  On the other hand,

`$ pgrep -u root,daemon`
will list the processes owned by **root** OR **daemon**.