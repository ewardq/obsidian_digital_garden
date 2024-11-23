---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/the-system-journal-systemd-journald/"}
---

---
As of 2015, [[systemd\|systemd]] replaced SysV Init as a de facto system and service manager in most major Linux distributions. As a consequence, the journal [[Linux Essentials/daemon\|daemon]]  _journald_ has become the standard logging component, superseding syslog in most aspects. Thus, the `journalctl` utility is necessary to read the logs.


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/linux-essentials/topic-4/journalctl/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




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

</div></div>
