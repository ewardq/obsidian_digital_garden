---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/network-configuration/","noteIcon":"1"}
---

---
There are several **persistent network** properties that can be configured in the directory `/etc/`, here's are some of them:

### `/etc/hostname`
File that stores the host name. It can be edited directly or with the command `hostname new_name`. With the `-s` flag the current hostname will be displayed and with `-f` the name + the domain.

### `/etc/hosts`
File that stores the IP's name association. Each line contains an IP followed by one or several names that will be associated said IP.

### `hostnamectl`
Command from the ecosystem [[systemd\|systemd]] to modify the name of the host and other values.

_Options:_ `status`, `set-hostname NAME` to modify the name, etc.

### `/etc/resolv.conf`
File in which traditionally the DNS' IPs configurations are done. 

### `/etc/nsswitch.conf`
With the help of this file, the order in which the Data Bases' information will be consulted can be changed.

To configure the DNS' name resolve configuration, to specify which entry will be first consulted, use:
