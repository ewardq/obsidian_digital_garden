---
{"dg-publish":true,"permalink":"/sad-servers-repo/solutions/taipei-come-a-knocking/"}
---

---
#bash #namp #knockd #curl #nmap
**Type:** Hack
**Description:** There is a web server on port :80 protected with [Port Knocking](https://en.wikipedia.org/wiki/Port_knocking). Find the one "knock" needed (sending a SYN to a single port, not a sequence) so you can `curl localhost`.

**Test:** Executing `curl localhost` returns a message with md5sum _fe474f8e1c29e9f412ed3b726369ab65_. (Note: the resulting md5sum includes the new line terminator: `echo $(curl localhost)`)

**Time to Solve:** 15 minutes.

---
### Notes and solution:
There is a technique in cyber security that consist in closing a port until a series of ports are contacted and connected in a specific sequence as a _secret combination_, then the closed port opens and a connection can be established.

If we try to connect to the default HTTP port, we get an error:
![Pasted image 20240829165537.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240829165537.png)

First, we scan for **open ports** in the server so we can start making all the possible combinations that might led to the opening of the port 80 using `nmap`.

```bash
nmap localhost
```
![Pasted image 20240829165630.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240829165630.png)
where we find that there are only two ports listening at the moment. We can discard the port used to establish an _ssh connection_, so the only other port available is 8080.

Using the `knockd` tool, we can start trying to guess the secret knock.
![Pasted image 20240829170134.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240829170134.png)
In this instance, the secret knock happens to be _one_ knock in the only port listening: 8080.
We can also see that the **http port (80) is now open**.

Therefore, we can now make a request to the server.

```bash
curl localhost
```
![Pasted image 20240829170357.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240829170357.png)

```bash
echo $(curl localhost)
```
![Pasted image 20240829170539.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240829170539.png)

___Success!___

### Sad Servers' solution
One other option is to knock in every single opened port to try and guess the correct sequence. This works only because we knew from the get-go that the secret knock consisted in knocking only one port.

```bash
nmap -PS localhost
```
![Pasted image 20240829171311.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240829171311.png)
where the `-PS` (TCP SYN Ping) option makes the command ping all found ports.