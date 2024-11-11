---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/your-computer-on-the-network/"}
---

---
The concept of computer networks are the physical connections between two different devices. _Links_ can be established through various media, such as copper cables, optical fibers, radio waves or lasers.

Each link is connected with an interface of a device. Each device can have multiple interfaces and thus be connected to multiple links. Through these computers can form a _network_; a small community of devices that can directly connect to each other.

This model leads to several different layers of networking:

_Link layer_: Handles the communication between directly connected devices.

_Network layer_: Handles routing outside of individual networks and the unique addressing of devices beyond a single link layer network.

_Application layer_: Enables individual programs to connect to each other.

### net-tools
For a long time, these commands were widely used to monitor and configure a network in Linux. They _obsolete_ tools and should be replaced by the modern evolution of them but nonetheless important to know just in case they are encountered in documentation or other sources.

- [[Linux Essentials/Topic 4/ifconfig\|ifconfig]]: Network interfaces administration. Changes made here **are not permanent** and will be reset upon restarting the system.

- [[Linux Essentials/Topic 4/netstat\|netstat]]: Shows network connections, routing and network traffic statistics.

- [[Linux Essentials/Topic 4/route\|route]]: Show / manipulate the IP routing table

