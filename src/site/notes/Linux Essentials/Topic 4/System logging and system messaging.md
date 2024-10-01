---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/system-logging-and-system-messaging/","noteIcon":"1"}
---

---
As soon as the kernel and the processes start executing and communicating with each other, a lot of information is produced. Most of it is sent to files - the so-called log files or, simply, _logs._

Without logging, searching for an event that happened on a server would give sysadmins many a headache, hence the importance of having a standardized and centralized way of keeping track of any system events.


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/linux-essentials/topic-4/logging-with-the-syslog-daemon/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---
Traditionally, system messages have been managed by the standard logging facility — syslog — or any of its derivatives — syslog-ng or [[Linux Essentials/Topic 4/rsyslog\|rsyslog]]. The logging [[daemon\|daemon]] collects messages from other services and programs and stores them in log files, typically under `/var/log`. However, some services take care of their own logs (like Apache HTTPD web servers). Likewise, the Linux kernel uses an in-memory ring buffer for storing its log messages.

### Log files in `/var/log`

Because logs are data that varies over time, they are normally found in `/var/log`. Here's a list of which logs are found there:

| Log file            | Description                                 |
| ------------------- | ------------------------------------------- |
| `/var/log/auth.log` | It stores information about authentication. |
| `/var/log/kern.log` | It stores kernel information.               |
| `/var/log/syslog`   | It stores system information.               |
| `/var/log/messages` | It stores system and application data.      |


</div></div>

