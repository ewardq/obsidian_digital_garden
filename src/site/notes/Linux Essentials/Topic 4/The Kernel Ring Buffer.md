---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/the-kernel-ring-buffer/","noteIcon":""}
---

---
The kernel ring buffer is a fixed-size data structure that records kernel boot messages as well as any live kernel messages. The function of this buffer is that of **logging all the kernel messages produced on boot** when `syslog` is not yet available.

The `dmesg` command prints the kernel ring buffer (which used to be also stored in `/var/log/dmesg`).

`sudo dmesg | less`
![Pasted image 20240818173302.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240818173302.png)

_dmesg_ options:
- `-T`: Shows better timestamps.
- `-H`: Human-readable form.
- `-k`: Only kernel messages.
- `l`: Filter by notification levels (warn, err, etc.)

