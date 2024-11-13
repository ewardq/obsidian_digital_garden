---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/chown/","dgPassFrontmatter":true}
---

---
___Change file owner and group___
Change the user and group of one or more elements (files and directories). The `-R` option makes it recursive (useful for changing the permissions of a directory and all or some of its files).

> [!Important] Syntax
> chown [OPTION] [OWNER]:[GROUP] ELEMENT

- `USER` - If only the user is specified, the specified user will become the owner of the given files. The group ownership is not changed.
- `USER:` - When the username is followed by a colon `:`, and the group name is not given, the user will become the owner of the files, and the files group ownership is changed to the user’s login group.
- `USER:GROUP` - If both the user and the group are specified (with no space between them), the user ownership of the files is changed to the given user and the group ownership is changed to the given group.
- `:GROUP` - If the User is omitted and the group is prefixed with a colon `:`, only the group ownership of the files is changed to the given group.
- `:` If only a colon `:` is given, without specifying the user and the group, no change is made.

---
#### EXAMPLES
`chown root /u`
- Change the owner of /u to "root".

`chown root:staff /u`
- Likewise, but also change its group to "staff".

`chown -hR root /u`
- Change the owner of /u and subfiles to "root".

#Need_Citation 
[Setting Permissions with chown and chmod | Baeldung on Linux](https://www.baeldung.com/linux/chown-chmod-permissions)