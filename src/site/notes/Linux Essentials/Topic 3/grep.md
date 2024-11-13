---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/grep/","dgPassFrontmatter":true}
---

---
___Shows only the lines that comply with a pattern. It can be used with word or regular expressions.___

> [! Tip] Syntax
	  grep [OPTION...] PATTERNS [FILE...]
       grep [OPTION...] -e PATTERNS ... [FILE...]
       grep [OPTION...] -f PATTERN_FILE ... [FILE...]

**grep** searches for `PATTERNS` in each `FILE`.  `PATTERNS` is one or more patterns separated by newline characters, and **grep** prints each line that matches a pattern.  Typically `PATTERNS` should be quoted when **grep** is used in a shell command.

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

