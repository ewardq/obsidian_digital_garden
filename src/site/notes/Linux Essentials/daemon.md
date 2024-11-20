---
{"dg-publish":true,"permalink":"/linux-essentials/daemon/"}
---

---
A daemon in Linux is a **background [[Processes \| process]] that performs certain operations or provides services without direct user intervention**.

Daemons are essential for the functioning of the operating system and for providing various services such as web servers, database servers, printer management, networking, and more. **Most require _root_ privileges**.

### Examples of Linux Daemons

`systemd` – the main purpose of this daemon is to unify service configuration and behavior across Linux distributions.

`rsyslogd` – used to log system messages. This is a newer version of `syslogd` having several additional features. It supports logging on local systems as well as on remote systems.

`udisksd` – handles operations such as querying, mounting, unmounting, formatting, or detaching storage devices such as hard disks or USB thumb drives

`logind` – a tiny daemon that manages user logins and seats in various ways

`httpd` – the HTTP service manager. This is normally run with Web server software such as Apache.

`sshd` – Daemon responsible for managing the SSH service. This is used on virtually any server that accepts SSH connections.

`ftpd` – manages the FTP service – FTP or File Transfer Protocol is a commonly-used protocol for transferring files between computers; one act as a client, the other act as a server.

`crond` – the scheduler daemon for time-based actions such as software updates or system checks.