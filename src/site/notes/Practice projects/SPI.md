---
{"dg-publish":true,"permalink":"/practice-projects/spi/"}
---

---
## What is the Serial Peripheral Interface (SPI)?


![SPI.png](/img/user/Practice%20projects/Reference%20images/SPI.png)

| Abbr.                                                          | Name                                                                           | Description                                                                              |
| -------------------------------------------------------------- | ------------------------------------------------------------------------------ | ---------------------------------------------------------------------------------------- |
| $\overline{CS}$                                                | Chip Set                                                                       | Active-low chip select signal from master to enable communication with a specific slave. |
| <font color="#BD10E0">SCLK</font>                              | <font color="#BD10E0">Serial CLock</font>                                      | Clock signal from master.                                                                |
| <font color="#4A90E2">MO</font><font color="#F5A623">SI</font> | <font color="#4A90E2">Master Out</font>, <font color="#F5A623">Slave In</font> | Serial data from master. Most significant bit first.                                     |
| <font color="#4A90E2">MI</font><font color="#F5A623">SO</font> | <font color="#4A90E2">Master In</font>, <font color="#F5A623">Slave Out</font> | Serial data from slave. Most significant bit first.                                      |


> [!tip] Important
> 
