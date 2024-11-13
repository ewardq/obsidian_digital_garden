---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/dns/","dgPassFrontmatter":true}
---

---
The **Domain Name System** (DNS) is a distributed phone book that maps friendly easy-to-remember domain names such as example.com to IP addresses. When, for example, a user navigates to a website, they enter the DNS hostname as part of the URL. The web browser then sends the DNS name to whichever DNS resolver has been configured. That DNS resolver will in turn find out the address that correlates to the domain. The resolver then replies with that address and the web browser tries to reach the web server at that IP address. 

The resolvers that Linux uses to look up DNS data are configured in the `/etc/resolv.conf` configuration file:

```host
$ cat /etc/resolv.conf
search lpi nameserver 192.168.0.1
```

To perform a lookup in the _DNS_, use the command `host`:
```host
$ host learning.lpi.org 
learning.lpi.org has address 208.94.166.198
```

Another important command to interface with _NDS_ is `dig`:


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/linux-essentials/topic-4/dig/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---
___DNS lookup utility___

> [! Tip] Syntax
	 dig [@server] [-b address] [-c class] [-f filename] [-k filename] [-m] [-p port#] [-q name] [-t type] [-x addr] [-y [hmac:]name:key] [-4] [-6] [name] [type] [class] [queryopt...]

**dig** (domain information groper) is a flexible tool for interrogating DNS name servers. It performs DNS lookups and displays the answers that are returned from the name **server**(s) that were queried. Most DNS administrators use **dig** to troubleshoot DNS problems because of its flexibility, ease of use and clarity of output. Other lookup tools tend to have less functionality than **dig**.

</div></div>
