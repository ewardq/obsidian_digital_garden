---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/command-behavior-types/"}
---

# Command Behavior Types

- The command ___type___ can tell us **if a command is an external or internal one**.
- The command ___which___ can tell us the **absolute route of a program.**
- The command ___uname -a___ shows information about the OS.

The shell supports two types of commands:

_Internal_: These commands are part of the shell itself are not separate programs. Their main purpose is executing tasks inside the shell.

| Command | Description                                |     |
| ------- | ------------------------------------------ | --- |
| cd      | Changes the current directory              |     |
| echo    | Displays a line of text of variable value. |     |
| exit    | Exist the current shell session.           |     |
| pwd     | Prints the current working directory.      |     |
| alias   | Creates an alias for a command.            |     |

_External_: These commands reside in individual files. These files are usually binary programs or scripts. When a command which is not a shell built-in is run, the shell uses the `PATH` variable to search for an executable file with the same name as the command.

| Command | Description                                  |
| ------- | -------------------------------------------- |
| ls      | Lists the contents of a directory.           |
| grep    | Searches for patterns in files.              |
| find    | Searches for files in a directory hierarchy. |
| cp      | Copies files and directories.                |
| mv      | Moves or renames files and directories.      |

