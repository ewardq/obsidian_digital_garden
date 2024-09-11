---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/the-proc-directory/","noteIcon":""}
---

---
The _/proc_ directory is one of the so-called virtual or pseudo filesystems since its contents are not written to disk, but loaded in memory. _/proc_ includes information about:
- Running processes
- Kernel configuration
- System hardware

Here are some of the system's hardware information that can be gathered from _/proc_:

_/proc/cpuinfo_: It stores information about the system's CPU.

_/proc/cmdline_: It stores the strings passed to the kernel on boot.

_proc/modules_: It shows the list of modules loaded into the kernel.