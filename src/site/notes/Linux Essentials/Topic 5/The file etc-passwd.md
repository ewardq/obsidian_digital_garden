---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/the-file-etc-passwd/","noteIcon":"1"}
---

---
`/etc/passwd` is a world-readable file that contains a list of users, each on a separate line:

```bash
frank:x:1001:1001::/home/frank:/bin/bash
```

Each line consists of seven colon-delimited fields:

| Fields            | Description                                                                                                                                                      |
| ----------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `Username`        | The name used when the user logs into the system.                                                                                                                |
| `Password`        | The encrypted password (or an x if shadow passwords are used).                                                                                                   |
| `User ID (UID)`   | The ID number assigned to the user in the system.                                                                                                                |
| `Group ID (GID)`  | The primary group number of the user in the system.                                                                                                              |
| `GECOS`           | An optional comment field, which is used to add extra information about the user (such as the full name). The field can contain multiple comma-separated entries |
| `Home directory ` | The absolute path of the user’s home directory.                                                                                                                  |
| `Shell`           | The absolute path of the program that is automatically launched when the user logs into the system (usually an interactive shell such as /bin/bash).             |
