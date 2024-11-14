---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/sockets/"}
---

---
A _socket_ is a communication endpoint for two programs talking to each other. If the socket is connected over a network, the programs can run on different devices, such as a web browser running on a user's laptop and a web server running in a company's data center. 

There are three main types of sockets:

| Socket type                                       | Description                                                                             |
| ------------------------------------------------- | --------------------------------------------------------------------------------------- |
| ___Unix Sockets___                                | Which connect processes running on the same device.                                     |
| ___UPD (User Datagram Protocol) Sockets___        | Which connect applications using a protocol which is fast but not resilient.            |
| ___TCP (Transmission Control Protocol) Sockets___ | Which are more reliable than UDP sockets and, for example, confirm the receipt of data. |
Unix sockets can only connect applications running on the same device. TCP and UDP sockets however can connect over a network. TCP allows for a stream of data that always arrives in the exact order it was sent. UDP is more fire and forget; the packet is sent but its delivery at the other end is not guaranteed.

UDP does however lack the overhead of TCP, making it perfect for low latency applications such as online video games.

To get more information about the current system's sockets, use the **Socket Statistics:**


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/linux-essentials/topic-4/ss/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




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



</div></div>
