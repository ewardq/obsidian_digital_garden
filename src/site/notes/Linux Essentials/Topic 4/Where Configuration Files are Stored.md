---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/where-configuration-files-are-stored/","noteIcon":""}
---

---
The _/etc_ directory was created as a catch-all directory to store any files that did not belong in the other categories (binaries _/bin_, kernel's boot _boot_, etc.). Most of these files were **configuration files**.

A configuration file usually is a local, plain text (as opposed to binary) file which **controls the operation of a program**.

_passwd_: Contains a line for each user and its associated information (home directory, shell, user identifier UID, group identifier GID, …)

_group_: Contains a line for each system group, its GID and the users that belong to it. System group database.

_shadows_: The users encrypted passwords as well as its time validity.

_hostname_: Name of the host computer.

_hosts_: Contains the list of IP addresses and their hostname translations.

Files ending with _.conf_: Files that configure systems' aspects or particular services (_resolv.conf_ for DNS, _apache.conf_ for web server, …)

Files ending with _.d_ They contain configuration files that will be imported by other programs. This is the evolution of the _.conf_ files and it's meant to **make the configuration process modular**.
