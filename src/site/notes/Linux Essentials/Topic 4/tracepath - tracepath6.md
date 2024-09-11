---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/tracepath-tracepath6/"}
---

# tracepath - tracepath6
It traces path to _destination_ discovering MTU along this path. It uses UDP port _port_ or some random port. It is similar to **traceroute**, only does not not require superuser privileges and has no fancy options.

![Pasted image 20240819182501.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240819182501.png)

The first column shows TTL of the probe, followed by colon. Usually value of TTL is obtained from reply from network, but sometimes reply does not contain necessary information and we have to guess it. In this case the number is followed by ?.

The second column shows the network hop, which replied to the probe. It is either address of router or word [LOCALHOST], if the probe was not sent to the network.

The rest of line shows miscellaneous information about path to the correspinding hetwork hop.

- **From man page**
