---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/compression-tools/","noteIcon":"1"}
---

---
Options to make security copies of files:

- **Total**: All files are copied
- **Differential**: Only modified files since a particular date are copied. To use this option, use `-N` followed by the date.
- **Incremental**: Only files changed since the last backup are copied. To use this option, use `-g` followed by the location of the registry file.

There are several commands to compress and decompress files. The most known are:
- [[gzip\|gzip]]
- [[bzip\|bzip]]
- [[xz\|xz]]

To save the original file or files when compressing, use the option `-k`. 
To decompress, use the option `-d`.

Examples
```bash
gzip file           # Compress a file
bzip -k file        # Compress a file and save the original 
gunzip file.xz      # Decompress a file 
bzip -d file.bz     # Decompress a file
```

