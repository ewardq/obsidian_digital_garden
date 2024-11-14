---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/file-directory-conditionals/"}
---

---
Conditionals regarding files and directories.

| Syntax            | Description                                                        |
| ----------------- | ------------------------------------------------------------------ |
| `-d PATH_TO_TEST` | True if the PATH_TO_TEST exist and it's a directory.               |
| `-e PATH_TO_TEST` | True if the PATH_TO_TEST exist.                                    |
| `-f PATH_TO_TEST` | True if the PATH_TO_TEST exist and it's a file.                    |
| `-r PATH_TO_TEST` | True if the PATH_TO_TEST exist and can be read.                    |
| `-w PATH_TO_TEST` | True if the PATH_TO_TEST exist and can be written.                 |
| `-x PATH_TO_TEST` | True if the PATH_TO_TEST exist and it's executable.                |
| `-s PATH_TO_TEST` | True if the PATH_TO_TEST exist and it's size is greater than zero. |

