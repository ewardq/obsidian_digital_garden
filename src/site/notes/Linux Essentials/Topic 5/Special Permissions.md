---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/special-permissions/"}
---

---
Besides read, write and execute permissions for user, group and others, each file can have three other _special permissions_ which can alter the way a directory works or how a program runs.

| Special Permission                                                                        | Description                                                                                                                                                                                                                                                                                                                                                       |
| ----------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `SetUID` or _Set User ID_<br><br>--- `s` on the _user_ permissions ---                    | The file that has this permission enable **will be executed with the permissions of the user who owns the file.**                                                                                                                                                                                                                                                 |
| `SetGID` or _Set Group ID_<br><br>--- `s` on the _group_ permissions ---                  | This can be applied to executable files or directories. <br><br>- On _executable files_, it will grant the process resulting from **executing the file access to the privileges of the group who owns the file.**<br><br>-  When applied to _directories_, it will make every file or directory created under it **inherit the group from the parent directory.** |
| `Sticky Bit` or _Restricted deletion flag_<br><br>--- `t` on the _others_ permissions --- | This applies only to directories, and on Linux it **prevents users from removing or renaming a file in a directory unless they own that file or directory.**                                                                                                                                                                                                      |

---
