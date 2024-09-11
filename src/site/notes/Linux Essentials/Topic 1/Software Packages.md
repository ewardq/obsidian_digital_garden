---
{"dg-publish":true,"permalink":"/linux-essentials/topic-1/software-packages/","noteIcon":""}
---

---
Besides the pre-installed set of default applications each Linux distribution offers, it also has a package repository with a vast collection of applications available to install through its _package manager._

### **.deb** packages
- Used in [[Debian\|Debian]]
- Managed by the command **dpkg** (Debian Package Manager)
- Uses repositories with the help of **apt** (or **apt-get**, **apt-cache**, …)

### **.rpm** packages
- Used in [[Red Hat\|Red Hat]] an it's derivatives
- Managed by the command **rpm** (RPM Package Manager)
- Uses repositories with the help of **yum** (**dnf** o **zypper**)

|             Actions              |          .deb           |          .rpm           |
| :------------------------------: | :---------------------: | :---------------------: |
| Update list of available packets |      `apt update`       |     (not necessary)     |
|        Look for a packet         | `apt search [package]`  | `yum search [package]`  |
|           [[Install\|Install]]            | `apt install [package]` | `yum install [package]` |
|            [[Remove\|Remove]]            | `apt remove [package]`  | `yum remove [package]`  |

