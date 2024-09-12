---
{"dg-publish":true,"permalink":"/linux-essentials/topic-1/server-programs/","noteIcon":"1"}
---

---
>When a web browser loads a page from a website, it actually connects to a remote computer and asks for a specific piece of information. In that scenario, the computer running the web browser is called the _client_ and the remote computer is called the _server_.
- _From the LPI Learning Material 010 - 160_

The server needs a protocol to manage each type of information it'll provide. When talking web servers, most use [[Linux Essentials/Topic 1/HTTP\|Linux Essentials/Topic 1/HTTP]] (Hyper Text Transfer Protocol) with the most popular programs being [[Apache\|Apache]], [[Nginx\|Nginx]] and [[lightttpd\|lightttpd]].

The role of the HTTP server is to collect and send all the requested data back to the browser, which then arranges the content as defined by the received [[HTML\|HTML]] (Hyper Text Markup Language) document. 

it is quite common for a server to communicate to with another one, such is the case of the server that makes use of a _database server_ to load lots of formatted data. 

The most common type of database is the _relational database_ and the most common open source databases are [[MariaDB\|MariaDB]] (originated from MySQL) and PostgreSQL.

[[LAPM\|LAPM]] is a widely used server architecture.