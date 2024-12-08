---
{"dg-publish":true,"permalink":"/practice-projects/msp-430-project-3/"}
---

---
## What is the Inter-Integrated Circuit (I2C) protocol?

I2C is a synchronous, multi-controller/multi-target (historically termed as multi-master/multi-slave), single-ended, serial communication bus invented in 1982 by Philips Semiconductors. [^1]

Widely used for attaching lower-speed peripheral integrated circuits (I2C) to processors and microcontrollers in short-distance intra-board communication.

![I2C.png](/img/user/Practice%20projects/Reference%20images/I2C.png)

| Abbr.                            | Name                                      | Description                          |
| -------------------------------- | ----------------------------------------- | ------------------------------------ |
| <font color="#4A90E2">SDA</font> | <font color="#4A90E2">Serial DAta</font>  | Serial data from master/controller.  |
| <font color="#F5A623">SCL</font> | <font color="#F5A623">Serial CLock</font> | Clock signal from master/controller. |
| Vdd                              | Positive Drain Drain                      | Positive Supply Voltage              |

_Characteristics_
- Synchronous (Has a clock signal).
- Multi-controller / Multi-target.
- Single-ended.
- Serial communication bus.

> [!tip] Important
> One particular strength of I2C is the capability of a microcontroller to control a network of device chips with just **two** general-purpose I/O pins and software.



[^1]: Extracted from [I²C - Wikipedia](https://en.wikipedia.org/wiki/I%C2%B2C)