---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/grep/","noteIcon":"1"}
---

---
___Shows only the lines that comply with a pattern. It can be used with word or regular expressions.___

> [! Tip] Syntax
	  grep [OPTION...] PATTERNS [FILE...]
       grep [OPTION...] -e PATTERNS ... [FILE...]
       grep [OPTION...] -f PATTERN_FILE ... [FILE...]

**grep** searches for _PATTERNS_ in each _FILE_.  _PATTERNS_ is one or more patterns separated by newline characters, and **grep** prints each line that matches a pattern.  Typically _PATTERNS_ should be quoted when **grep** is used in a shell command.

### Important options

| Options               | Description                                                                    |
| --------------------- | ------------------------------------------------------------------------------ |
| `-v`, `--invert-match | Invert the search. Shows only the information that do NOT comply with pattern. |
| `-l`                  |                                                                                |
| `-w`                  |                                                                                |
| `-n`                  |                                                                                |
| `-i`                  |                                                                                |
| `-c`                  |                                                                                |
| `-r`                  |                                                                                |

