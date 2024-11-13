---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/http-header-fields/","dgPassFrontmatter":true}
---

---
With each request and response, you have something called a _header_ and a _body_.

![Pasted image 20240820015639.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240820015639.png)

The _body_, as a **response** usually is the HTML page that you are trying to load. 
![Pasted image 20240820015708.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240820015708.png)

When you make a **request**, the _body_ usually is a request form.
![Pasted image 20240820015745.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240820015745.png)

### Types of headers

| General         | Response       | Request        |
| --------------- | -------------- | -------------- |
| Request URL     | Server         | Cookies        |
| Request Method  | Set-Cookie     | Accept-xxx     |
| Status Code     | Content-Type   | Content-Type   |
| Remote Address  | Content-Lenght | Content-Lenght |
| Referrer Policy | Date           | Authorization  |
|                 |                | User-Agent     |
|                 |                | Referrer       |

