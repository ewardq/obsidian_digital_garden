---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/network-configuration/","dgPassFrontmatter":true}
---

---
There are several **persistent network** properties that can be configured in the directory `/etc/`, here's are some of them:

### `/etc/hostname`
File that stores the host name. It can be edited directly or with the command `hostname new_name`. With the `-s` flag the current hostname will be displayed and with `-f` the name + the domain.

![Pasted image 20241001182143.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020241001182143.png)

---
### `/etc/hosts`
File that stores the IP's name association. Each line contains an IP followed by one or several names that will be associated said IP.

![Pasted image 20241001182055.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020241001182055.png)

---
### `hostnamectl`
Command from the ecosystem [[systemd\|systemd]] to modify the name of the host and other values.

_Options:_ `status`, `set-hostname NAME` to modify the name, etc.

![Pasted image 20241001182122.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020241001182122.png)

---
### `/etc/resolv.conf`
File in which traditionally the DNS' IPs configurations are done. 

![Pasted image 20241001182252.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020241001182252.png)

---
### `/etc/nsswitch.conf`
With the help of this file, the order in which the Data Bases' information will be consulted can be changed.

To configure the DNS' name resolve configuration, to specify which entry will be first consulted, use:

![Pasted image 20241001182345.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020241001182345.png)