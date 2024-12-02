---
{"dg-publish":true,"permalink":"/embedded-projects/res-tful-api/"}
---

---

RESTful API stands for **Representational State Transfer API**.

It is a **web service interface** that allows devices or applications to communicate with each other over the internet.

![REST-Architecture.png](/img/user/EmbeddedProjects/Reference%20images/REST-Architecture.png)

> We typically use HTTP requests (GET, POST, DELETE, PUT) so clients can interact with the system.

---


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/embedded-projects/res-tful-ap-is-in-io-t/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---

[[RESTful API \| RESTful APIs]] are particularly significant in IoT because they **provide a standardized way** for devices to exchange information, interact with remote servers, and perform actions remotely.

In IoT, RESTful APIs **facilitate seamless data transfer between sensors, devices**, and **cloud services**, allowing data to be monitored, analyzed, and acted upon.

</div></div>


---

<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/embedded-projects/key-principles-of-rest-architecture/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---

The [[RESTful API \| REST]] architecture is based on several principles that make it highly suitable for IoT applications:

- **Statelessness**: Each request from a client to the server must contain all the information needed to understand and process the request. This means no session state is stored on the server, making interactions efficient and scalable.

- **Client-Server Model**: REST uses a client-server architecture, separating the user interface concerns (client) from data storage concerns (server). This model allows IoT devices (clients) to send and receive data from a central server (often a cloud server).

- **Resource-Based URLs**: Resources in REST APIs are accessed through URLs that uniquely identify them. For example, and environmental monitoring system might have resources like temperature data, humidity data, or device status, each accessible via specific URLs.



</div></div>
