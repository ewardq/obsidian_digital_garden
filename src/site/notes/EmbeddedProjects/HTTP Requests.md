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
- ==Body:== Contains data payloads for request like POST or PUT.

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

> [!info]- Click to see complete request
> ``` 
> GET /data/latest HTTP/1.1
> Host: website.com 
> User-Agent: Chrome/5.0 (Windows 10) 
> Accept-Language: en-US 
> Accept-Encoding: gzip, deflate 
> Connection: keep-alive</code.
> ```

---
## Response Components

- ==Status Codes:== Indicate success or failure of the request.
- ==Headers:== Provide metadata about the response.
- ==Body:== Often contains the requested data or confirmation message.

_HTTP GET  successful request response_
```
HTTP/1.1 200 OK
```

_HTTP GET  error in request response_
```
HTTP/1.1 400 OK
```

here, the [[Linux Essentials/Topic 4/HTTP Status Codes\| HTTP status code]] 400 means that there is a problem in the client-side (request does not have what it needs).

_Response body_
```
HTTP/1.1 200 OK 
Date: Mon, 27 Jul 2022 12:28:53 GMT 
Server: Apache/2.2.14 (Win32) 
Last-Modified: Wed, 22 Jul 2022 19:15:56 GMT 
Content-Length: 88 
Content-Type: text/html 
Connection: Closed 
<!DOCTYPE HTML PUBLIC “-//IETF//DTD HTML 2.0//EN”></code.
```

This examples were extracted from [What Is an HTTP Request?](https://kinsta.com/knowledgebase/what-is-an-http-request/)

