---
{"dg-publish":true,"permalink":"/linux-essentials/topic-3/regular-expressions/"}
---

---
**Regular expressions** are extremely useful in extracting data from text files by construction patterns. They are commonly used within scripts or when programming with high level languages like Python or Perl.

Each pattern must be written with the purpose of matching a specific sequence of characters.

Here's the list of the regular expressions meta-characters that are used to form the patterns.

> [!Important]
> To prevent the shell from interpreting the meta-character itself, it's recommended that the more complex pattern be between double quotes (" ")


| Meta-character | Description                                                                                                          |
| -------------- | -------------------------------------------------------------------------------------------------------------------- |
| `.`            | Match any single character (except newline).                                                                         |
| `[abcABC]`     | Match any one character within the brackets (in this case, both lowercase and uppercase a, b and c will be matched). |
| `[^abcABC]`    | Match any one character except the ones in the brackets (any character is valid but not the ones mentioned).         |
| `[a-z]`        | Match any character in the range.                                                                                    |
| `[^a-z]`       | Match any character except the ones in the range.                                                                    |
| `^`            | Start of a line.                                                                                                     |
| `$`            | End of a line.                                                                                                       |

`^` -----------------------------------------------------------------------------
Start of a line.
```bash
grep ^a /usr/share/dict/spanish
```
Show the words that begin with the letter "a".

`$` -----------------------------------------------------------------------------
End of a line.
```bash
grep o$ /usr/share/dict/spanish
```
Show the words that end with the letter "o".

---
Let's see a more complex search using ReGEx

```bash
grep ^c[aei]s[ao]$ /usr/share/dict/spanish
```
Search for words that:
- start with "c" 
- the second letter is either "a", "e" or "i"
- the third letter is "s"
- end with either "a" or "o"