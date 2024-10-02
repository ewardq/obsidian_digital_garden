---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/network-adapter-configuration/","noteIcon":"1"}
---

---
[Understanding and Configuring Linux Network Interfaces | Baeldung on Linux](https://www.baeldung.com/linux/network-interface-configure)
**A network interface is the point of connection between a computer and a network**. In other words, how the Linux system links up the software side of networking to the hardware side.
#### Network Interface Types
The Linux system distinguishes two types of network interfaces - the physical network interface and the virtual network interface.

A **physical network interface** presentes a network hardware device such as NIC (Network Interface Card), WNIC (Wireless Network Interface Card), or a modem.

A **virtual network interface** does not present a hardware device but is linked to a network device. It can be associated with a physical or virtual interface.

---
### How to configure a network adapter
___To configure a network adapter in Debian, use the file___ `/etc/network/interfaces`

```bash
allow-hotplug enp0s3
iface enp0s3 inet dhcp
```

```bash
auto enp0s3
iface enp0s3 inet static
address 192.168.0.5
netmask 255.255.255.0
gateway 192.168.0.1
```

___To configure a network adapter in Red Hat, use the file___ `/etc/sysconfig/network-script/ifcfg-name_interface`

```bash
TYPE=Ethernet              # Type of interface
DEVICE=enp0s3              # Name of interface
NM_CONTROLLED="no"         # Ingnored by NetworkManager
ONBOOT=yes                 # Start on system boot
BOOTPROTO=none             # Use static config (dhcp)
HWADDR=01:0A:03:1F:67:13   # MAC address
IPADDR=192.168.0.5         # IP address
NETMASK=255.255.255.0      # Network mask
NETWORK=192.168.0.0        # Network address
GATEWAY=192.168.0.1        # Gateway
```

#Need_Citation 