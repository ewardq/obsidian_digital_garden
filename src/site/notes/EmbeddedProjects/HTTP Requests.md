---
{"dg-publish":true,"permalink":"/embedded-projects/http-requests/"}
---

---

The [[Linux Essentials/Topic 4/HTTP\|HTTP]] protocol is the foundation of [[EmbeddedProjects/RESTful API\|RESTful API]]s, enabling communication between clients and servers.

The core HTTP methods are used to perform **CRUD** (Create, Read, Update, Delete) operations on resources, essential for managing data in IoT applications:

- ==GET:== **Requests data from server.** In IoT, this might be used to retrieve the latest sensor data.
- ==POST:== **Submits new data to the server.** For example, an IoT device might use POST to send temperature readings to a server.

---
## Requests and Responses

A ==request== is initiated by the client and sent to the server, while a ==response== is sent back by the server to the client.

Requests and responses are the basis of data exchange in RESTful APIs.

---
## Request Components

- ==Method:== Specifies the type of operation (e.g., GET, POST).
- ==URL:== The endpoint or path being requested.
- ==Headers:== Provide metadata like content type or authentication tokens.

_Request header_
```
Host: website.com 
User-Agent: Chrome/5.0 (Windows 10) 
Accept-Language: en-US 
Accept-Encoding: gzip, deflate 
Connection: keep-alive</code.
```

_HTTP GET request_
```
GET /data/latest HTTP/1.1
```


> [!info]- Closed at start
> Contents
