---
{"dg-publish":true,"permalink":"/embedded-projects/the-consumer-and-the-producer/"}
---

---
- A **consumer** is an entity that takes information from a source.
- A **producer** is an entity that sources this information.

> [!Note] Note
> **A client can still produce and consume.**
> This means that the client can both consume and produce data (usually from a database).

## Embedded Device as a Data Source

The embedded device (STM32 with ESP32) typically acts as a data source, periodically sending data to the could via POST requests.

It's usually responsible for **collecting** sensor readings or status information, then **posting** this data to a RESTful API endpoint hosted in the could.

![REST-Architecture.png](/img/user/EmbeddedProjects/Reference%20images/REST-Architecture.png)

---

## Web or Mobile Client as Data Consumer

In parallel, a different client, like a web or mobile application, retrieves the data from the could.

It uses **GET request** to pull the latest or historical data, which it can display on a dashboard.

This client often has features like **data visualization**, **user alerts**, and real-time monitoring.

![coverimg](https://i0.wp.com/www.informationq.com/wp-content/uploads/2017/12/What-is-a-Web-Server.jpg?resize=2196%2C1476&ssl=1)

This image was sourced from [What is a Web Server? | Types of Web Servers | InforamtionQ.com](https://informationq.com/what-is-a-web-server/)

