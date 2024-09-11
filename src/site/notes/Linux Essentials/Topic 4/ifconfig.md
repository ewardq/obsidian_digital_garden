---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/ifconfig/","noteIcon":""}
---

---
**Ifconfig** is used to configure the kernel-resident network interfaces. It is used at boot time to set up interfaces as necessary. After that, it is usually only needed when debugging or when system tuning is needed.
	From man page

If no arguments are given, **ifconfig** displays the status of the currently active interfaces. If a single **interface** argument is given, it displays the status of the given interface only; if a single **-a** argument is given, it displays the status of all interfaces, even those that are down. Otherwise, it configures an interface.
	From man page

![Pasted image 20240818192350.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240818192350.png)
- _ens5_: Network adapter.
- _inet 10.0.0.235_: Network adapter's IP.
- _netmask 255.255.255.0_: Network adapter's subnet mask.
- _inet6_: IPv6 protocol IP address.
- _(Ethernet)_: Tells us that this is an Ethernet adapter.
- _RX packets, RX errors, TX packets, TX errors_: Packet statistics.

> If you want to restart a network adapter because it is not configuring correctly, you can set it down with `ifconfig ens5 down` and then set it up with `ifconfig ens5 up`.
