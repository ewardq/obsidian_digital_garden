---
{"dg-publish":true,"permalink":"/linux-essentials/topic-1/network-administration/","dgPassFrontmatter":true}
---

---
Communication between computers is only possible if the network is working correctly.  This network configuration is usually done by a set of programs running on the router, _responsible for setting up and checking the network availability_. 

To achieve this, two basic network services are used:

_DHCP (Dynamic Host Configuration Protocol):_ responsible for **assigning an IP address** to the host when cable is connected or when the service enters a wireless network. If DHCP is not configured or if it's not working properly, it would be necessary to manually configure the IP address of each device connected to the network.

_DNS (Domain Name System):_ the DNS server is responsible for translating the IP number `203.0.113.165` to a easy to remember name, like `www.lpi.org` and to search for the IP address when only the name is provided.

-From the LPI Learning Material 010 - 160