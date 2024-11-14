---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/repeated-regex/"}
---

---
When you want to make a search where a certain pattern repeats itself a number of times in a [[Linux Essentials/Topic 3/Regular Expressions\|Regular Expression]], make use of a repeated pattern:

| Meta-character | Description                                                                   |
| -------------- | ----------------------------------------------------------------------------- |
| `X*`           | Match none or more repetitions of the Regular expression preceding it (X).    |
| `X?`           | Match none or one repetitions of the Regular expression preceding it (X).     |
| `X+`           | Match one or more repetitions of the Regular expression preceding it (X).     |
| `X{n}`         | Match exactly (n) repetitions of the Regular expression (X).                  |
| `X{n,}`        | Match (n) or more repetitions of X                                            |
| `X{,n}`        | Match zero or at max (n) repetitions of the Regular expression (X).           |
| `X{n,m}`       | Match with at least (n) repetitions of the RegEx (X) but max (m) repetitions. |

To use the extended Regular expressions, add the `-E` flag to the [[Linux Essentials/Topic 3/grep\|grep]] command:
```bash
grep --color -E '^[h-q]{8}$^ /usr/share/dict/spanish
```
```bash
homónimo
pimpollo
piojillo
piopollo
```
