---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/i-pv6-networking/","dgPassFrontmatter":true}
---

---
___IPv6 was designed to deal with the shortcomings of IPv4, mainly the lack of addresses as more and more devices were being brought online.___

Written down, the addresses use 8 groups of 4 hexadecimal digits each separated by a colon:

```
2001:0db8:0000:abcd:0000:0000:0000:7334
```

- Instead of 32 bits per address IPv6 uses **128** (Aprox. $2^{128}$ addresses)
- **Hexadecimal notation**
	- Groups are separated by `:`
	- If there are several zeroes to the left, they can be omitted, like this: `2001:db8:0:abcd:0:0:0:7334`
	- If there are multiple groups containing only zeroes follow directly after each other they may be entirely replaced by `::`, like this: `2001:db8:0:abcd::7334`
- **Autoconfigurable**: Can configure themselves  a value using the MAC
- **Without subnet mask**: The net part is always the _first 4 groups_ and the rest is the host part.
- **Safer**: Incorporates security options. IPsec is integrated and allows authentication and to encrypt packets.



