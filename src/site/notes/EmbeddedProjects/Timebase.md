---
{"dg-publish":true,"permalink":"/embedded-projects/timebase/"}
---

---
==This is a way to tell time in our system.== This allows us to do things like generate delays precisely and tell how long the program has been executing.

To make this possible, we use the [[Timers\|Timers]] within the microcontroller. For the NUCLEO STM32 microcontroller there are up to 11 timers according to the datasheet: 
- Up to **six 16-bit timers**
- **Two** 32-bit timers up to 100 MHz, each with up to four IC/OC/PWM or pulse counter and quadrature (incremental) encoder input
- **Two** watchdog timers (independent and window) 
- And a **[[EmbeddedProjects/SysTick timer\|SysTick timer]]**.