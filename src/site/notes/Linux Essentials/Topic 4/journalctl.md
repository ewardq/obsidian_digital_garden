---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/journalctl/","noteIcon":"1"}
---

---
___Control the [[systemd\|systemd]] login manager___

`journalctl` is used to read and query systemd's journal database.
![Pasted image 20240818174238.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240818174238.png)

However, if invoked with the `-k` or `--dmesg` switches, it will be equivalent to using the `dmesg` command:
![Pasted image 20240818174442.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240818174442.png)

other interesting `journalctl` options are:
- `-b` shows boot information.
- `-u` shows messages about a specified unit.
- `-f` shows most recent journal messages and keeps printing new entries as they are appended to the journal.