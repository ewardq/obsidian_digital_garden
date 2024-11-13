---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/the-file-etc-gshadow/","dgPassFrontmatter":true}
---

---
`/etc/gshadow` is a file readable only by root and by users with root privileges that contains encrypted passwords for groups, each on a separate line:

```bash
developer:$6$7QUIhUX1WdO6$H7kOYgsboLkDseFHpk04lwAtweSUQHipoxIgo83QNDxYtYwgmZTCU0qSCuCkErmyR2 63rvHiLctZVDR7Ya9Ai1::
```

Each line consists of four colon-delimited fields:

| Fields                 | Description                                                                                                                                                                                                                                 |
| ---------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `Group name`           | The name of the group.                                                                                                                                                                                                                      |
| `Encrypted password`   | The encrypted password for the group (it is used when a user, who is not a member of the group, wants to join the group using the `newgrp` command — if the password starts with `!`, no one is allowed to access the group with `newgrp`). |
| `Group administrators` | A comma-delimited list of the administrators of the group (they can change the password of the group and can add or remove group members with the  `gpasswd` command).                                                                      |
| `Group members`        | A comma-delimited list of the members of the group.                                                                                                                                                                                         |

#Need_Color #Need_Citation 