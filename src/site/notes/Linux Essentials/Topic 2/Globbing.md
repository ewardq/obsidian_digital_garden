---
{"dg-publish":true,"permalink":"/linux-essentials/topic-2/globbing/","noteIcon":"1"}
---

---
What is commonly referred to as **globbing** is a simple pattern matching language.

Command line shells on Linux systems use this language to refer to groups of files whose names match a specific pattern. There are three pattern matching characters:

| Character | Description                                                   |
| --------- | ------------------------------------------------------------- |
| `*`       | Matches any number of any character, including no characters. |
| `?`       | Matches any one character.                                    |
| `[]`      | Matches a class of characters.                                |
|           | - Matches a **range** of characters                           |
|           | - `^` **Negates** the matching of characters.                 |


> [!IMPORTANT]
> This means that you can tell your shell to match a pattern instead of a literal string of text.

### Match any number of any character

```bash
$ cd ~/linux_essentials-2.4/globs 
$ ls question1 question14 question2012 star10 star2002 question13 question15 question23 star1100 star2013 
$ ls star1* 
star10 star1100 
$ ls star* 
star10 star1100 star2002 star2013 
$ ls star2* 
star2002 star2013 
$ ls star2*2 
star2002 
```
The `*` character expands to any number of anything. The first example prints all files starting with `star1`, this results in `start10` and `star1100`.

### Match any one character

```bash
$ ls 
question1 question14 question2012 star10 star2002 question13 question15 question23 star1100 star2013 
$ ls question? 
question1 
$ ls question1? 
question13 question14 question15 
$ ls question?3 
question13 question23 
$ ls question13? 
ls: cannot access question13?: No such file or directory
```
The `?` character expands to any single character, in a fixed position.

### Match a class of characters

The `[]` brackets are used to match ranges or classes of characters. The `[]` brackets work like they do in POSIX regular expressions except with globs the `^` is used instead of `!`.

The character classes supported depends on your current locale. POSIX requires the following character classes for all locales:

| `[:alnum:]`  | Letters and numbers.                                                       |
| ------------ | -------------------------------------------------------------------------- |
| `[:alpha:]`  | Upper or lowercase letters.                                                |
| `[:blank:]`  | Spaces and tabs.                                                           |
| `[:cntrl:]`  | Control characters, e.g. backspace, bell, NAK, escape.                     |
| `[:digit]`   | Numerals (0123456789).                                                     |
| `[:graph:]`  | Graphic characters (all characters except `ctrl` and the space character). |
| `[:lower:]`  | Lowercase letters (`a-z`).                                                 |
| `[:print:]`  | Printable characters (`alnum`, `punct`, and the space character).          |
| `[:punct:]`  | Punctuation characters, i.e. `!`, &, `"`.                                  |
| `[:space:]`  | Whitespace characters, e.g. tabs, spaces, newlines.                        |
| `[:upper:]`  | Uppercase letters (`A-Z`)                                                  |
| `[:xdigit:]` | Hexadecimal numerals (usually `0123456789abcdefABCDEF`).                   |
