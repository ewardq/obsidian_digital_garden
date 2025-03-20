---
{"dg-publish":true,"permalink":"/sad-servers-repo/solutions/tokamachi-troubleshooting-a-named-pipe/"}
---

---
#kill #bash #namepipe #ps
**Type:** Fix
**Description:** There's a process reading from the named pipe _/home/admin/namedpipe_.  
  
If you run this command that writes to that pipe:  
  
```bash
/bin/bash -c 'while true; do echo "this is a test message being sent to the pipe" > /home/admin/namedpipe; done' &  
```
  
And check the reader log with `tail -f reader.log`  
  
You'll see that after a minute or so it works for a while (the reader receives some messages) and then it stops working (no more received messages are printed to the reader log or it takes a long time to process one). Troubleshoot and fix (for example changing the writer command) so that the writer keeps sending the messages and the reader is able to read all of them.

**Root (sudo) Access:** False

**Test:** There should be a process running where a message is being sent to the pipe and that while that is running, another message can be sent to the pipe and read back.  
The "Check My Solution" button runs the script _/home/admin/agent/check.sh_, which you can see and execute.

---
### Notes and solution:
After executing the scenario command, we observe that the log is not printing at regular times.

```bash
/bin/bash -c '
while true; 
do echo "this is a test message being sent to the pipe" > /home/admin/namedpipe; 
done' &  
```

![Pasted image 20250320013316.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020250320013316.png)

Let's examine the script that's writing into _reader.log_
![Pasted image 20250320013458.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020250320013458.png)
Here, we observe that the script is reading every two seconds (`sleep 2`) so we must send the echo to the named pipe every two (or more) seconds as well.

To achieve this, we simply kill the process that's already started and then we add the same command when printing into the named pipe.

```bash
/bin/bash -c '
while true; 
do echo "this is a test message being sent to the pipe" > /home/admin/namedpipe; 
sleep 2;
done' &  
```

![Pasted image 20250320013811.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020250320013811.png)

___Success!___