---
{"dg-publish":true,"permalink":"/linux-essentials/topic-1/encryption/"}
---

---
Whenever data is transferred or stored, **precautions need to be taken to ensure that third parties may not access the data**. Data transferred over the internet passes by a series of routers and networks where third parties might be able to access the network traffic. Likewise, data stored on physical media might be read by anyone who comes into possession of that media. To avoid this kind of access, confidential information should be encrypted before it leaves a computing device.

[[TLS (Transport Layer Security)\|TLS (Transport Layer Security)]]: Successor of [[SSL (Secure Sockets Layer)\|SSL (Secure Sockets Layer)]], it allows to encrypt the communication of protocols, web, email, etc.
- It can provide both privacy, and authenticity by making use of what is called **symmetric and public-key cryptography**. By saying that, we mean that once in use, you can be sure that nobody will be able to eavesdrop or alter your communication with that server during that session

In Linux, we can encrypt, sign and decrypt data by using _GnuPG_ or _Veracrypt_.

To encrypt **whole disks** we can make use of _dm-crypt_ or _EncFS_.
