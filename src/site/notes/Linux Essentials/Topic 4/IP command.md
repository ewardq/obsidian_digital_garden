---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/ip-command/"}
---

# ifconfig
Show / manipulate routing, devices, policy routing and tunnels.

The `IP` command englobes a lot of functionalities from now obsolete network managing commands. Some of them are:

| Obsolete commands |                                       Equivalent commands                                       |
| :---------------: | :---------------------------------------------------------------------------------------------: |
|        arp        |                                      `ip n` (ip neighbor)                                       |
|     ifconfig      |                        `ip a` (ip addr), `ip link`, `ip -s` (ip -stats)                         |
|      netstat      | [[ss\|ss]], `ip route` (for netstat -r), `ip -s link` (for netstat -i), `ip maddr` (for netstat -g) |
|       route       |                                        `ip r` (ip route)                                        |

_iproute2_ `ip`
Substitutes commands like [[Linux Essentials/Topic 4/ifconfig\|ifconfig]], [[Linux Essentials/Topic 4/route\|route]], and _arp_.

```bash
ip [Options] Object [Command [Arguments]]
```

Objects:
- **links**: To configure logical or physical objects from the network.
- **address**: Protocol (IP or IPv6) address on a device.
- **neighbor**: ARP or NDISC cache entry.
- **rule**: Rule in routing policy database.
- **route**: Routing table entry.
- **tunnel**: Manage IP tunnels.
- **maddr**: Change/See multicast addresses, its properties.
- **mroute**: Set, change or delete the multicast routing.
- **monitor**: Monitor continuously the state of devices, addresses and routes.

___Activate and deactivate a network device___: `ip link set enp0s3 up/down`

___Activate and deactivate ARP___: `ip link set dev enp0s3 arp on/off`

___See IP addresses___: `ip addr show` 
![Pasted image 20240819185307.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240819185307.png)

`ip -c a`
![Pasted image 20240819185400.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240819185400.png)


___Add IP addresses___: `ip addr add 192.168.1.4/24 dev enp-s3`

___See routing table___: `ip route add 10.10.50.0/24 via 192.168.1.1 dev enp0s3`

___Add route___: `ip route add 10.10.50.0/24 via 192.168.1.1 dev enp0s3`

___Delete route___: `ip route del 10.10.50.0/24`

___Configure gateway___: `ip route add default via 192.168.1.1`

