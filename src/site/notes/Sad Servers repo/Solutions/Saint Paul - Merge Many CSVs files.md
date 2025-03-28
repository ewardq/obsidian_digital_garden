---
{"dg-publish":true,"permalink":"/sad-servers-repo/solutions/saint-paul-merge-many-cs-vs-files/"}
---

---
#bash #csv #tail #head
**Type**: Do
**Description**: Join (merge) all the 338 files in /home/admin/polldayregistrations_enregistjourduscrutin?????.csv into one single /home/admin/all.csv file with the contents of all the CSV files in any order. There should be only one line with the names of the columns as a header.

**Test**: The "Check My Solution" button runs the script /home/admin/agent/check.sh, which you can see and execute.

---
# Notes and solution
To merge of of the CSV files it might be tempting to just concatenate all of their contents together in the **all.csv** solution file

```bash
cat *.csv > all.csv
```

but this leads to headers being repeated all thorough the resulting file.

![Pasted image 20240915223237.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240915223237.png)

So, to fix this, instead of concatenating all lines of all files, concatenate the common header (from the first file) and then the content from each file using a recursive search.

```bash
head -n 1 polldayregistrations_enregistjourduscrutin10001.csv > all.csv && tail -n+2 -q *.csv >> all.csv
```

Let's break down this command 

1. First add the header from the first file to the target file
```bash
head -n 1 polldayregistrations_enregistjourduscrutin10001.csv > all.csv
```
![Pasted image 20240915223429.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240915223429.png)

2. Then, add the content from all of the files present in the folder **at the same time** `&&`, this is to prevent adding the target file (all.csv) in this operation, thus adding the header two times.
```bash
 tail -n+2 -q *.csv >> all.csv
```
![Pasted image 20240915223851.png](/img/user/Sad%20Servers%20repo/Solutions/Reference%20images/Pasted%20image%2020240915223851.png)

___Now a merged file was correctly created without repeating headers.___
