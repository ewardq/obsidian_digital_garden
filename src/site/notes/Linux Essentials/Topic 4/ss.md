---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/ss/","noteIcon":"1"}
---

---
### Socket Statistics
`ss` is an utility to investigate sockets.

> [! Tip] Syntax
	 ss [options] [ FILTER ]

 **ss** is used to dump socket statistics. It allows showing information similar to [[Linux Essentials/Topic 4/netstat\|netstat]].  It can display more TCP and state information than other tools.

---
#### Important options

| Options               | Description                                                                                               |
| --------------------- | --------------------------------------------------------------------------------------------------------- |
| `-t`                  | Show only TCP connections.                                                                                |
| `-u`                  | Show only UDP connections.                                                                                |
| `-l` or `--listening` | Show listening sockets.                                                                                   |
| `-p` or `--processes` | Show process using socket.                                                                                |
| `-s` or `--summary`   | Print summary statistics. This option does not parse socket lists obtaining summary from various sources. |
| `-n` or `--numeric`   | Do not try to resolve service names. Show exact bandwidth values, instead of human-readable.              |

---
#### Filters

> [! Tip] Syntax
	 FILTER := [ state SOCKET_OPTIONS ] [ exclude SOCKET_OPTIONS ] [ EXPRESSION ]

With **state** the sockets can be: `ESTABLISHED`, `LISTENING`, `CLOSED`, `CONNECTED`, `TIME-WAIT`, etc.

With **exclude** some sockets that met the state criteria are excluded.

**EXPRESSION** can be constructed with:
- _Logical operators:_ `and`, `or` and `not`
- _Origin and destination:_ `{src|dst} [ IP[/prefix] ][ :port ]`
- _Socket origin and destination:_ `{dport|sport} {eq|neq|gt|ge|lt|le} [IP]:port`

Example:

```bash
ss state established '(sport = :http or sport = :https)' src 192.188.1.0/24
```

With this, **socket statistics** shows sockets that:
- Have an `established` state
- Their origin port (`sport`) is `http` ___or___ `https`
- And their source is the `192.188.1.0/24` address

