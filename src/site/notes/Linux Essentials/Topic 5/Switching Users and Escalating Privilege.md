---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/switching-users-and-escalating-privilege/","noteIcon":"1"}
---

---
There are commands that allow for privilege escalation when needed. Two of the most important ones are `su` and `sudo`.

On most Linux systems today, the `su` command is only used for escalating privileges to root, which is the default user if a username is not specified after the command name. While it can be used to switch to another user, it is not good practice: users should login from another system, over the network, or physical console or terminal on the system.

```bash
eduardo ~$ su -
Password:
root ~#
```


> [!Note] Note
> To start the execution environment of the user we are changing into, use the command and option  `su -`

---

### Information about logins
- [[Linux Essentials/Topic 5/who\|who]]: Indicates _who_ has logged in.
- [[Linux Essentials/Topic 5/w\|w]]: Show who is logged on and what they are doing.
- [[Linux Essentials/Topic 5/last\|last]]:  Show listing of last logged in users