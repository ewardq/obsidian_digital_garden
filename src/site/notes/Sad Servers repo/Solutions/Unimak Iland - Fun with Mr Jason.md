---
{"dg-publish":true,"permalink":"/sad-servers-repo/solutions/unimak-iland-fun-with-mr-jason/","dgPassFrontmatter":true}
---

---
**Type:** Do
**Description:** Using the file _station_information.json_ , find the station_id where "has_kiosk" is false and "capacity" is greater than 30.  
  
Save the station_id of the solution in the /home/admin/mysolution file, for example: `echo "ec040a94-4de7-4fb3-aea0-ec5892034a69" > ~/mysolution`
  
You can use the installed utilities [jq](https://jqlang.github.io/jq/), [gron](https://github.com/tomnomnom/gron), [jid](https://github.com/simeji/jid) as well as [Python3](https://docs.python.org/3/library/json.html) and [Golang](https://gobyexample.com/json).  
  

**Root (sudo) Access:** False

**Test:** `md5sum /home/admin/mysolution` returns `8d8414808b15d55dad857fd5aeb2aebc`

---
### Notes and solution:
