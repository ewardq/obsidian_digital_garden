---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/w/"}
---

---
___Show who is logged on and what they are doing.___

> [!Important] Syntax
	w - [husfV] [user]

**w** displays information about the users currently on the machine, and their processes. The header shows, in this order, the current time, how long the system has been running, how many users are currently logged on, and the system load averages for the past 1, 5, and 15 minutes.

The following entries are displayed for each user: login name, the tty name, the remote host, login time, idle time, JCPU, PCPU, and the command line of their current process.

The JCPU time is the time used by all processes attached to the tty. It does not include past background jobs, but does include currently running background jobs.

The PCPU time is the time used by the current process, named in the "what" field.