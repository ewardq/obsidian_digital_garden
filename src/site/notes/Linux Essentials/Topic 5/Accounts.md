---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/accounts/"}
---

---
Every user on a Linux system has an associated account which besides login information (like username and password) also defines how, and where, the user can interact with the system. Privileges and access controls define the “boundaries” within which each user can operate.

---
### Identifiers (UIDs/GIDs)
The _User_ and _Group Identifiers_ (UIDs/GIDs) are the basic, enumerated references to accounts. Most modern systems support 64-bit UIDs and GIDs. Users and groups are enumerated independently, so the same ID can stand for both a user and group.

Every user has not only an UID, but also a _primary_ GID. The primary GID for a user can be unique to that user alone, and may end up not being used by any other users. However, this group could also be a group shared by numerous users. In addition to these primary groups, each user can be member of other groups, too.

---

### The Superuser Account
On Linux the superuser account is `root`, which always has `UID 0`. The superuser is sometimes called the system administrator, and has unlimited access and control over the system, including other users.

The default group for the superuser has the `GID 0` and is also named the superuser is a dedicated, top level directory, `/root`. The home directory for /root, only accessible by the root user himself.

---

### Standard User Accounts
All accounts other than `root` are technically regular user accounts, but on a Linux system the colloquial term _user account_ often means a “regular” (unprivileged) user account. They typically have the following properties, with select exceptions:

- `UIDs` starting at 1000 (4 digits), although some legacy systems may start at 500.
- A defined home directory, usually a subdirectory of `/home`, depending on the site-local configuration.
- A defined login shell. IN Linux the default shell is usually the _Bourne Again Shell_ (`/bin/bash`), though others may be available.