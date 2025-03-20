---
{"dg-publish":true,"permalink":"/sad-servers-repo/solutions/yokohama-linux-users-working-together/"}
---

---
#bash 
**Type:** Fix
**Description:** There are four Linux users working together in a project in this server: abe, betty, carlos, debora.  
  
First, they have asked you as the sysadmin, to make it so each of these four users can read the project files of the other users in the _/home/admin/shared_ directory, but none of them can modify a file that belongs to another user. Users should be able modify their own files.  
  
Secondly, they have asked you to modify the file shared/ALL so that any of these four users can write more content to it, but previous (existing) content cannot be altered.

**Root (sudo) Access:** True

**Test:** All users (abe, betty, carlos, debora) can write to their own files. None of them can write to another user's file.  
All users can add more content (append)) to the shared/project_ALL file but none can change its current content.  
The "Check My Solution" button runs the script `/home/admin/agent/check.sh`, which you can see and execute.

---
### Notes and solution:
