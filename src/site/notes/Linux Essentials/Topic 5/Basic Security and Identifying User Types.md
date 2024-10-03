---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/basic-security-and-identifying-user-types/","noteIcon":"1"}
---

---
Use `su [USER]` to change between users.

Use `ls -l` to see which permissions are present in the current files.

Use `whoimi` to see what is the current user.

Use `groups` to see to which security groups belongs the current user.

Use `id` to see information about the current user.

### How to know the group the user belongs to?

Change to the user you want to know more info about and write the command `id`

### How to change a user's group?

Change to the user you want to add to a group and write the command `newgrp`

### Change file owner and group

<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/linux-essentials/topic-5/chown/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---
___Change file owner and group___
Change the user and group of one or more elements (files and directories). The `-R` option makes it recursive (useful for changing the permissions of a directory and all or some of its files).

> [!Important] Syntax
> chown [OPTION] [OWNER]:[GROUP] ELEMENT

#### EXAMPLES
`chown root /u`
- Change the owner of /u to "root".

`chown root:staff /u`
- Likewise, but also change its group to "staff".

`chown -hR root /u`
- Change the owner of /u and subfiles to "root".

</div></div>
