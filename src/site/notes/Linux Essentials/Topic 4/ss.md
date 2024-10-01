---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/ss/","noteIcon":"1"}
---

---
### Socket Statistics
`ss` is an utility to investigate sockets.

> [! Tip] Syntax
	 ss [options] [ FILTER ]

 **ss** is used to dump socket statistics. It allows showing information similar to [[Linux Essentials/Topic 4/netstat\|netstat]].  It can display more TCP and state information than other tools.

#### Important options

| Options               | Description                                                                                               |
| --------------------- | --------------------------------------------------------------------------------------------------------- |
| `-t`                  | Show only TCP connections.                                                                                |
| `-u`                  | Show only UDP connections.                                                                                |
| `-l` or `--listening` | Show listening sockets.                                                                                   |
| `-p` or `--processes` | Show process using socket.                                                                                |
| `-s` or `--summary`   | Print summary statistics. This option does not parse socket lists obtaining summary from various sources. |
| `-n` or `--numeric`   | Do not try to resolve service names. Show exact bandwidth values, instead of human-readable.              |
