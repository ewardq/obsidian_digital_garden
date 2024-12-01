---
{"dg-publish":true,"permalink":"/linux-essentials/hexdump/"}
---

---
___The hexdump utility is a filter which displays the specified files, or the standard input, if no files are specified, in a user specified format.___

> [! Tip] Syntax
	hexdump [-bcCdovx] [-e format_string] [-f format_file] [-n length] [-s skip] file ...

**hexdump** - ascii, decimal, hexadecimal, octal dump

**Formats**  
A format string contains any number of format units, separated by whitespace. A format unit contains up to three items: an iteration count, a byte count, and a format.

The iteration count is an optional positive integer, which defaults to one. Each format is applied iteration count times.

The byte count is an optional positive integer. If specified it defines the number of bytes to be interpreted by each iteration of the format.

If an iteration count and/or a byte count is specified, a single slash must be placed after the iteration count and/or before the byte count to disambiguate them. Any whitespace before or after the slash is ignored.

[]: [hexdump(1) - Linux man page](https://linux.die.net/man/1/hexdump)