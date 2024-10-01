---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/sockets/","noteIcon":"1"}
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