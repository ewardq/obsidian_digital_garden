---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/cut/","noteIcon":"1"}
---

---
___Remove sections from each line of files___

> [! Tip] Syntax
	 cut [OPTION]... [FILE]...

Print selected parts of lines from each FILE to standard output.

### Important options

| Options                   | Description                                                                                                             |
| ------------------------- | ----------------------------------------------------------------------------------------------------------------------- |
| `-c`, `--characters=LIST` | Select only these characters.                                                                                           |
| `-b`, `--bytes=LIST`      | Select only these bytes.                                                                                                |
| `-d`, `--delimiter=DELIM` | Use DELIM instead of TAB for field delimiter.                                                                           |
| `-f`, `--fields=LIST`     | Select only these fields; also print any line that contains no delimiter character, unless the `-s` option is specified |
