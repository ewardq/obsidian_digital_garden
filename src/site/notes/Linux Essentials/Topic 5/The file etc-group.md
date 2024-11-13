---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/the-file-etc-group/","dgPassFrontmatter":true}
---

---
`/etc/group` is a world-readable file that contains a list of groups, each on a separate line:

```bash
developer:x:1002:
```

Each line consists of four colon-delimited fields:

| Fields           | Description                                                                                              |
| ---------------- | -------------------------------------------------------------------------------------------------------- |
| `Group Name`     | The name of the group.                                                                                   |
| `Group Passowrd` | The encrypted password of the group (or an x if shadow passwords are used).                              |
| `Group ID (GID)` | The ID number assigned to the group in the system.                                                       |
| `Member list`    | A comma-delimited list of users belonging to the group, except those for whom this is the primary group. |

#Need_Citation #Need_Color 