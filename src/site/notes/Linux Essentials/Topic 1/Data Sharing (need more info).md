---
{"dg-publish":true,"permalink":"/linux-essentials/topic-1/data-sharing-need-more-info/","dgPassFrontmatter":true}
---

---
Computers also need to communicate with each other. Sometimes one computer acts as a server, sometimes the same computer acts as a client. That is necessary to access files on another computer in the local network.

Between Linux machines, [[NFS\|NFS]] (Network File System) is often used. The NFS protocol is the standard way to share file systems in networks equipped only with Unix/Linux machines.
NFS can be used to _share an entire operating system's directory tree_ with clients that will use it to boot from.

If there are other types of operating systems attached to the network, it is recommended to use a data sharing protocol that can be understood by all of them. This requirement is fulfilled by [[Samba\|Samba]]. Samba implements a protocol for sharing files over the network originally made for the Windows Operating system, but today compatible with all major operating systems.