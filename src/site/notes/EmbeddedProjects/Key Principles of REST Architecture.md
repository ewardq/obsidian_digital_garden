---
{"dg-publish":true,"permalink":"/embedded-projects/key-principles-of-rest-architecture/"}
---

---

The [[RESTful API \| REST]] architecture is based on several principles that make it highly suitable for IoT applications:

- **Statelessness**: Each request from a client to the server must contain all the information needed to understand and process the request. This means no session state is stored on the server, making interactions efficient and scalable.

- **Client-Server Model**: REST uses a client-server architecture, separating the user interface concerns (client) from data storage concerns (server). This model allows IoT devices (clients) to send and receive data from a central server (often a cloud server).

- **Resource-Based URLs**: Resources in REST APIs are accessed through URLs that uniquely identify them. For example, and environmental monitoring system might have resources like temperature data, humidity data, or device status, each accessible via specific URLs.

