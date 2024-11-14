---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/lscpu/"}
---

---
___Display information about the CPU architecture.___

![Pasted image 20240930101229.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240930101229.png)

**lscpu** gathers CPU architecture information from sysfs and /proc/cpuinfo. The command output can be optimized for parsing or for easy readability by humans.  
The information includes, for example, the number of CPUs, threads, cores, sockets, and Non-Uniform Memory Access (NUMA) nodes. There is also information about the CPU caches and cache sharing, family, model, bogoMIPS, byte order, and stepping.