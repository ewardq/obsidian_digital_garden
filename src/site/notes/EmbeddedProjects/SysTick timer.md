---
{"dg-publish":true,"permalink":"/embedded-projects/sys-tick-timer/"}
---

---
Also known as the ==System Tick timer==, it exist in all ARM Cortex processors; so if we were to use another processor from an ARM Cortex family, we can make use of the same timer.


> [!important] Important
> It is a good practice to use the System Tick timer to create a [[EmbeddedProjects/Timebase\|Timebase]] because it is versatile and because the SysTick timer was developed specially to make it straightforward to use a tick from the system itself.
