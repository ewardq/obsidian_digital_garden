---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/chown/","noteIcon":"1"}
---

---
**chown:** Change the user and group of one or more elements (files and directories). The `-R` option makes it recursive (useful for changing the permissions of a directory and all or some of its files).

> [!Important] Syntax
> chown [OPTION] [OWNER]:[GROUP] ELEMENT

#### EXAMPLES
`chown root /u`
- Change the owner of /u to "root".

`chown root:staff /u`
- Likewise, but also change its group to "staff".

`chown -hR root /u`
- Change the owner of /u and subfiles to "root".