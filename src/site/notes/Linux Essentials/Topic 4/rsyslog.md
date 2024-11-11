---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/rsyslog/"}
---

---
___Reliable and extended syslogd.___

> [! Tip] Syntax
	rsyslogd [ -d ] [ -D ] [ -f config file ] [ -i pid file ] [ -n ] [ -N level ] [ -o fullconf ] [ -C ] [ -v ]

**rsyslogd** is a system utility providing support for message logging.  Support of both internet and UNIX domain sockets enables this utility to support both local and remote logging.

It's configuration file is stored in `/etc/rsyslog.conf` or an alternative file, given with the **-f** option, is read at startup.

The messages select is constituted by two parts: **facility** and **priority**

### Facility (origin of message)
List of facilities used by _rsyslog_. Generally it depends on the situation how to classify logs and put them to facilities.

| 0 `kern`: kernel messages                                  | 6 `lpr`: line printer subsystem                | 12 `ntp`: NTP subsystem        |
| ---------------------------------------------------------- | ---------------------------------------------- | ------------------------------ |
| 1 `user`: user-level messages                              | 7 `news`: network news subsystem               | 13 `logaudit`: log audit       |
| 2 `mail`: mail system                                      | 8 `uucp`: UUCP subsystem                       | 14 `logalert`: log alert       |
| 3 `daemon`: system daemons                                 | 9 `cron`: clock daemon                         | 15 `clock`: clock daemon       |
| 4 `auth`: security/authorization <br>messages              | 10 `security`: security/authorization messages | 16-23 `local#`: local use 1-23 |
| 5 `syslog`: messages generated <br>internally by _syslogd_ | 11 `ftp`: FTP daemon                           |                                |

### Priority

| Numerical Code | Severity | Description                      |
| -------------- | -------- | -------------------------------- |
| 0              | emerg    | system is unusable               |
| 1              | alert    | action must be taken immediately |
| 2              | crit     | critical conditions              |
| 3              | error    | error conditions                 |
| 4              | warning  | warning conditions               |
| 5              | notice   | normal but significant condition |
| 6              | info     | informational messages           |
| 7              | debug    | debug-level messages             |

### How to use
Here's  some examples on how to use the _rsyslog_ utility.

| Selector                    | Description                                       |
| --------------------------- | ------------------------------------------------- |
| `*.*`                       | All messages                                      |
| `*.info`                    | All _info_ messages                               |
| `kern.*`                    | All _kernel_ messages                             |
| `mail.err`                  | All _email error_ messages                        |
| `cron,lpr.warn`             | Warning messages of _cron_ and _lpr_              |
| `cron.err;cron.!alert`      | Error messages from _cron_ but **not** the alerts |
| `mail.=err`                 | Email errors                                      |
| `*.info;mail.none;lpr.none` | All _info_ messages except _mail_ and _lpr_       |
