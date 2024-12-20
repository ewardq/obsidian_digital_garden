---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/processes/"}
---

---
Every time a user issues a command, a program is run and one or more processes are generated. 

Processes exist in a hierarchy. After the kernel is loaded in memory on boot, the first process is initiated which - in turn - starts other processes, which, again, can start other processes.


> [!IMPORTANT] Important
> Each process has a unique identifier `PID` and a parent process identifier `PPID`.


Here are some commands to analyze processes. 

- [[Linux Essentials/Topic 4/ps\|ps]]: Shows information about the executing processes as a snapshot.
- [[Linux Essentials/Topic 4/pstree\|pstree]]: Shows the processes in a hierarchy.
- [[Linux Essentials/Topic 4/top\|top]]: Shows information about the processes in real time.
- [[Linux Essentials/Topic 4/htop\|htop]]: Similar to _top_ but it is a lot more modern.

- [[Linux Essentials/Topic 4/free\|free]]: How much memory is being used and how much is available.
- [[Linux Essentials/Topic 4/uptime\|uptime]]: How much time the system has been up and the load average of the last 1, 5 and 15min.
- [[Linux Essentials/Topic 4/pgrep\|pgrep]]: Process with the _grep_ functionality.
