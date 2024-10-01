---
{"dg-publish":true,"permalink":"/logging-with-the-syslog-daemon/","noteIcon":"1"}
---

---
Traditionally, system messages have been managed by the standard logging facility — syslog — or any of its derivatives — syslog-ng or [[rsyslog\|rsyslog]]. The logging [[daemon\|daemon]] collects messages from other services and programs and stores them in log files, typically under `/var/log`. However, some services take care of their own logs (like Apache HTTPD web servers). Likewise, the Linux kernel uses an in-memory ring buffer for storing its log messages.

### Log files in `/var/log`

Because logs are data that varies over time, they are normally found in `/var/log`. Here's a list of which logs are found there:

| Log file            | Description                                 |
| ------------------- | ------------------------------------------- |
| `/var/log/auth.log` | It stores information about authentication. |
| `/var/log/kern.log` | It stores kernel information.               |
| `/var/log/syslog`   | It stores system information.               |
| `/var/log/messages` | It stores system and application data.      |
