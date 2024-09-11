---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/command-line-basics/"}
---

# Command Line Basics
There are several different shells on Linux, these are just a few:
- Bourne-again shell ([[Bash\|Bash]])
- C shell (csh or tcsh, the enhanced csh)
- Korn shell (ksh)
- Z shell (zsh)

With the most common one being _Bash_.

When using an interactive shell, the user inputs commands at a so-called prompt. For each Linux distro, the default prompt may look a little different, but it usually follows this structure:

> [!Default prompt structure]
>    _username_@___hostname___ **current_directory** shell_type

where:
- _username_ is the name of the user that runs the shell.
- ___hostname___ is the name of the host on which the shell runs. You can change it or show the current host name with `hostname`.
- **current_directory** is the directory that the shell is currently in. A **~** means that the shell is in the current user's home directory.
- shell type
	- ==$== indicates the shell is run by a regular user.
	- ==#== indicates the shell is run by the superuser root.


Here are some examples of the default prompt on different distros:

==$ Regular user== Ubuntu or Debian GNU/Linux 
> _carol_@___mycomputer___: **~**$

==# Super user== Ubuntu or Debian GNU/Linux 
> _root_@___mycomputer___: **~**#

---
==$ Regular user== Red Hat or CentOS
> \[_carol_@___mycomputer___ **~**\] $

==# Super user== Red Hat or CentOS
> \[_root_@___mycomputer___ **~**\] #
