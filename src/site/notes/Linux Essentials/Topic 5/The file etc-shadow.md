---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/the-file-etc-shadow/"}
---

---
`/etc/shadow` is a file readable only by root and users with root privileges and contains the encrypted passwords of the users, each on a separate line:

```bash
frank:$6$i9gjM4Md4MuelZCd$7jJa8Cd2bbADFH4dwtfvTvJLOYCCCBf/.jYbK1IMYx7Wh4fErXcc2xQVU2N1gb97yI YaiqH.jjJammzof2Jfr/:18029:0:99999:7:::
```

Each line consists of nine colon-delimited fields:

| Fields                         | Description                                                                                                                                                                              |
| ------------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `Username`                     | The name used when user logs into the system.                                                                                                                                            |
| `Encrypted password`           | The encrypted password of the user (if the value is `!`, the account is locked).                                                                                                         |
| `Date of last password change` | The date of the last password change, as number of days since 01/01/1970. A value of `0` means that the user must change the password at the next access.                                |
| `Minimum password age`         | The minimum number of days, after a password change, which must pass before the user will be allowed to change the password again.                                                       |
| `Maximum password age`         | The maximum number of days that must pass before a password change is required.                                                                                                          |
| `Password warning period`      | The number of days, before the password expires, during which the user is warned that the password must be changed.                                                                      |
| `Password inactivity period`   | The number of days after a password expires during which the user should update the password. After this period, if the user does not change the password, the account will be disabled. |
| `Account expiration date`      | The date, as number of days since 01/01/1970, in which the user account will be disabled. An empty field means that the user account will never expire.                                  |
| `A reserved field`             | A field that is reserved for future use.                                                                                                                                                 |

#Need_Citation #Need_Color