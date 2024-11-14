---
{"dg-publish":true,"permalink":"/sad-servers-repo/solutions/gitega-find-the-bad-git-commit/"}
---

---
#bash #git #gitBisect
**Type:** Fix
**Description:** The directory at _/home/admin/git_ has a Git repository with a Golang program and a test for it.  
  
To execute the test, from this "git" directory run: `go test`. The last (current HEAD) commit fails the test. Suppose the first commit passed the test.  
  
Find the (long hash) commit that first broke the test and enter it in the _/home/admin/solution_ file. For example: `echo 9e80a7eb1b09385e93ab4a76cb2c93beec48fd9f > /home/admin/solution`

**Test:** Doing `md5sum /home/admin/solution` returns `f7db1bb6b7bfcd66a4eb66782804b39d`.  
  
The "Check My Solution" button runs the script _/home/admin/agent/check.sh_, which you can see and execute.

---
### Notes and solution:
To find a bad commit without a graphical interface we'll use [[git bisect\|git bisect]] to binary search through the history and find the point in time where the error was first introduced.

First, let's go to the directory where the git repository is located.

```bash
cd /home/admin/git
```

And run the test

```bash
go test
```
![Pasted image 20241016091310.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020241016091310.png)

This result in a failed test, let's start _git bisect_ and mark this commit as a _bad commit_.

```bash
git bisect start
git bisect bad
```

**NOTE**: When there are no parameters in `git bisect bad`, the commit marked is the HEAD commit.

Let's look at the git log to see how many commits have been done until this point.

```bash
git log
```
![Pasted image 20241016091456.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020241016091456.png)

This SadServers' scenario tells us to assume that the first ever commit is a good commit, so let's mark that as `good`

```bash
git bisect good 9e80a
```
![Pasted image 20241016091554.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020241016091554.png)

This takes us to the middle of the git history (5th commit).

Let's see if the error is present
```go
go test
```
![Pasted image 20241016092001.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020241016092001.png)

Not quite there, let us mark this commit as `bad`
```bash
git bisect bad
```
![Pasted image 20241016092130.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020241016092130.png)

```go
go test
```
![Pasted image 20241016092201.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020241016092201.png)

**Success!!**, but not quite, this commit doesn't have the error we are trying to correct but the next commit might not be the culprit, let's find out

```bash
git bisect good
go test
```
![Pasted image 20241016092620.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020241016092620.png)

It turns out ___the commit that first introduced the error is the 4th commit___.

![Pasted image 20241016092902.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020241016092902.png)
___Success!!___