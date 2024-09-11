---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/netstat/","noteIcon":""}
---

---
**Netstat** prints information about the Linux networking subsystem. Print network connections, routing tables, interface statistics, masquerade connections, and multicast memberships.
	From man page

![Pasted image 20240818193646.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240818193646.png)

`netstat --help`
![Pasted image 20240818193757.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240818193757.png)

Here are some useful flags, such as `-t` we get the active internet connections that use the TCP protocol.

`netstat -t`
![Pasted image 20240818194042.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240818194042.png)

or the UDP protocol.
`netstat -u`
![Pasted image 20240818194130.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240818194130.png)

You can also see all the process with ports that are currently **listening**. ___Who is making contact with my server?___

`netstat -l`
![Pasted image 20240818194311.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240818194311.png)

As an example, we can see what are the **processes** (`p`) that have open ports (`l`) with the IPv4 protocol (`t4`).

`netstat -tl4p`
![Pasted image 20240818194752.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240818194752.png)
