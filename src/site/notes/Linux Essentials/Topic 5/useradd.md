---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/useradd/","dgPassFrontmatter":true}
---

---
___Create a new user or update default new user information___

> [!Important] Syntax
	useradd [options] USER_NAME
	useradd -D
	useradd -D [options]

When invoked without the **-D** option, the **useradd** command creates a new user account using the values specified on the command line plus the default values from the system. Depending on command line options, the **useradd** command will update system files and may also create the new user's home directory and copy initial files.

| Options | Description                                                                                                                                                    |
| ------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `-d`    | Home directory                                                                                                                                                 |
| `-m`    | Create home directory                                                                                                                                          |
| `-g`    | Main group                                                                                                                                                     |
| `-G`    | Secondary group(s)                                                                                                                                             |
| `-s`    | Command interpreter                                                                                                                                            |
| `-k`    | The [[skeleton directory\|skeleton directory]], which contains files and directories to be copied in the user's home directory, when the home directory is created by **useradd**. |
