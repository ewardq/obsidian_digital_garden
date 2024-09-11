---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/partitions/"}
---

---
A partition is a division in the hard drive space. It is effectively a long sequence of storage locations. Each partition is treated as if it is an individual device.

### But why would I need multiple partitions?
Some examples for using multiple partitions would be:
- Managing available storage.
- Isolating encryption overhead.
- Supporting multiple file systems.
- It makes it possible to _have a single device that can boot under different operating systems._

Linux needs **at least two partitions**: one for the _system_ and another for the _[[swap space\|swap space]]._

_Logical Volume Manager_ (LVM) is a software capability that allows administrators to combine individual disks and disk partitions and treat them as if they are a single drive.

### Directories
![Pasted image 20240816200614.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240816200614.png)

| Directory | Description                                                                                               |
| --------- | --------------------------------------------------------------------------------------------------------- |
| /         | The root directory. It contains all the systems' hierarchy.                                               |
| /bin/     | Binary apps.                                                                                              |
| /boot/    | Boot files. Run at startup.                                                                               |
| /dev/     | It contains special files related to hardware devices.                                                    |
| /etc/     | Contains systems' configuration files.                                                                    |
| /home/    | Contains working directories of the user.                                                                 |
| /usr/     | Secondary hierarchy of user data. Contains the majority of utilities and multi-user apps.                 |
| /var/     | Variable files such as logs, spool, databases, temporary email files and some temporary files in general. |
|           |                                                                                                           |
