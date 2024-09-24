---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/tar/","noteIcon":"1"}
---

---
This commands compresses several files and directories into a single file.

> [! Tip] Syntax
	tar [options] destination.tar files

Compact files
```bash
tar -cf files.tar /etc/ /var/
```

Extract files
```bash
tar -xf files.tar
```

---

Compress with gzip
```bash
tar -czf files.tar.gz /etc/ /var/
```

> Note
> The order of the options for the tar command is important. This two commands result in different files: -czf  and -fzc

Extract with gzip
```bash
tar -xzf files.tar.gz
```

---

### Important options

| tar Options | Description                                    |
| ----------- | ---------------------------------------------- |
| `-c`        | compact                                        |
| `-x`        | expand                                         |
| `-f`        | write or read from a file                      |
| `-z`        | compress or decompress with gunzip             |
| `-j`        | compress or decompress with bzip2              |
| `-P`        | use absolute routes (relative by default)      |
| `-p`        | preserve file permissions from original files  |
| `-r`        | add elements to a compacted file               |
| `-t`        | show what files are present in the _tar_ file. |
