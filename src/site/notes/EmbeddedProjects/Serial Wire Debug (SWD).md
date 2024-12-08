---
{"dg-publish":true,"permalink":"/embedded-projects/serial-wire-debug-swd/"}
---

---

Serial Wire Debug (SWD) is a two-wire protocol for accessing the ARM debug interface.

It is part of the ARM Debug Interface Specification v5 and is an alternative to [[JTAG\|JTAG]].

The physical layer of SWD consist of two lines:
- SWDIO: A bidirectional data line.
- SWCLK: A clock driven by the host.

By using SWD interface should be able to program MCUs internal flash memory, access memory regions, add breakpoints, stop/run CPU, etc.

The other good thing about SWD is that you can use the serial wire viewer for your `printf()` statements for debugging.

2 pin (Debug) + 1 pin (Trace)

![](http://dangerousprototypes.com/blog/wp-content/media/2012/11/Post1_Images.preview.png)