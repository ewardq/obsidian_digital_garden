---
{"dg-publish":true,"permalink":"/sad-servers-repo/solutions/tokyo-can-t-serve-web-file/"}
---

---
#bash #curl #ping #ss #iptables #chmod
**Type:** Fix
**Description:** There's a web server serving a file _/var/www/html/index.html_ with content "hello sadserver" but when we try to check it locally with an HTTP client like `curl 127.0.0.1:80`, nothing is returned. This scenario is not about the particular web server configuration and you only need to have general knowledge about how web servers work.

**Test:** `curl 127.0.0.1:80` should return: `hello sadserver`.

---
### Notes and solution:
First, we try to make a HTTP request to the server.

```bash
curl 127.0.0.1:80
```
![Pasted image 20240820213512.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240820213512.png)

It doesn't give any response. To troubleshoot the connection, we can try to reach the host with the command `ping`.

```bash
ping -c 5 127.0.0.1
```
![Pasted image 20240820213826.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240820213826.png)
There is an established connection to the server.

Now, we have to make sure that the port is actually listening. We can test this with the command `ss`.

```bash
ss -l src :80
```
![Pasted image 20240820214445.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240820214445.png)
Where the `-l` lists all the _listening sockets_ and `src :80` filters only the port number _80_.

if the port is listening and the connection with the server is established, maybe something is blocking the port connection.

To check this, we'll print the IP rules to see if something related to the HTTP request is blocked using `iptables`.

```bash
iptables -S
```
![Pasted image 20240820214757.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240820214757.png)
As we can see, **the traffic entering from port 80 is being blocked** by the IP rules.

To fix this, we'll have to override this rule so it accepts requests from that port.

```bash
iptables -R INPUT 1 -p tcp -m tcp --dport 80 -j ACCEPT
```
![Pasted image 20240820215052.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240820215052.png)
With this command we are `R`ewriting the rule so it `ACCEPTS` the requests coming from port 80.

We try again to make the request.

![Pasted image 20240820215231.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240820215231.png)
This time, we get a different error; but it seems that now it has to do with something related to permissions.

To troubleshoot this, we have to read the error log files from Apache, this log file it's located in the _/var/log/apache2/error.log_ text file.

```bash
cat /var/log/apache2/error.log
```
![Pasted image 20240820215846.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240820215846.png)
The "file permissions deny server access: /var/www/html/index.html" tells us that Apache doesn't have the permissions necessary to read that file.

To check this, we'll look up the Apache's permissions regarding  _index.html_.

```bash
ls -l /var/www/html/index.html
```
![Pasted image 20240820220106.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240820220106.png)
As we can see, only the owner _root_ can read or write this file.

To fix this, we'll also give other users the capability of _reading that file_.

```bash
sudo chmod o+r /var/www/html/index.html
```
![Pasted image 20240820220713.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240820220713.png)

Now, we should get a response from the server.
![Pasted image 20240820221030.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240820221030.png)

___Success!___


