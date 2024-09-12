---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/variables/","noteIcon":"1"}
---

---
Variables are pieces of storage for data, such as text or numbers. Once set, a variable’s value can be accessed at a later time. Variables have a name which allows accessing a specific variable, even when the variable’s content changes. They are a very common tool in most programming languages.

In most Linux shells, there are two types of variables:

___Local variables___: There variables **are available to the current shell process only.** If you create a local variable and then start another program from this shell, the variable is not accesible to that program anymore. Because they are not inherited by sub processes, these variables are called _local variables_.

___Environment variables___: These variables **are available both in a specific shell session and in sub processes spawned from that shell session.** These variables can be used to pass configuration data to commands which are run. Because these programs can access these variables, they are called _environment variables_.

---

_set_: Shows or modify the environment configuration. Without parameters, it visualizes environment viables and with the option `-o` a list of options and its states.

_export_: Create or modify environment variables.
```bash
export NOMBRE=Eduardo
```

_unset_: Deletes environment variables.
```bash
unset NOMBRE
```

_env_: Without parameters it shows environment variables. We can use it to execute a command while modifying environment variables.
```bash
env PATH=/new/path /bin/bash
```
