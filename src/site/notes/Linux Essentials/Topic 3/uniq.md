---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/uniq/"}
---

---
___Report or omit repeated lines___

> [! Tip] Syntax
	 uniq [OPTION]... [INPUT [OUTPUT]]

Filter adjacent matching lines from  `INPUT ` (or standard input), writing to  `OUTPUT ` (or standard output).

With no `FILE`, or when `FILE` is `-`, read standard input.

### Important options

| Option                | Description                                    |
| --------------------- | ---------------------------------------------- |
| `-d`, `--repeated`    | Only print duplicate lines, one for each group |
| `-i`, `--ignore-case` | Ignore differences in case when comparing      |
| `-c`, `--count`       | Prefix lines by the number of ocurrences       |
