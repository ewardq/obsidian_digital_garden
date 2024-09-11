---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/the-dev-directory/"}
---

# The dev directory
The **device** directory _/dev_ contains device files (or nodes) for all connected hardware devices. These device files are used as an interface between the devices and the processes using them. Each device file falls into one of two categories:

_Block devices_: Are those in which data is **read and written in blocks** which can be individually addressed. Such as Hard Drives, DVDs, USB flash drives, CDs, etc.

_Character devices_: Are those in which data is **read and written sequentially one character at a time**. Examples include keyboards, the text console (_/dev/console_), serial ports (such as _/dev/ttyS0_ and so on), etc.

