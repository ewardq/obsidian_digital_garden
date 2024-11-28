---
{"dg-publish":true,"permalink":"/digital-garden/practice-projects/"}
---

---

Here you'll find basic projects to get the basics of several microcontrollers and get the gist of them :)

# MSP430 Launch Pad

## MSP430G2553
### 16 MHz MCU with 16KB Flash, 512B SRAM, comparator, UART/SPI/I2C, time
![LaunchPad features.png](/img/user/Practice%20projects/Reference%20images/LaunchPad%20features.png)
This image was extracted from the official TI website (2).

![LaunchPad Pinnout.png](/img/user/Practice%20projects/Reference%20images/LaunchPad%20Pinnout.png)
This image was extracted from this reference (1).

Let's make use of each of it's features:

| Feature          | Project description                                                                                                                                   |
| ---------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------- |
| Serial UART      |                                                                                                                                                       |
| SPI              |                                                                                                                                                       |
| ADC              |                                                                                                                                                       |
| I2C              | [[Practice projects/MSP430 Project 3\|MSP430 Project 3]]  #Basics<br>Communicate a microcontroller with a Display.<br>_This code makes use of I2C to interface with a two row display_    |
| GPIO Digital I/O | [[Practice projects/MSP430 Project 1\|MSP430 Project 1]]  #Basics<br>Make use of pins as digital inputs and outputs.<br>_This code reflects the input from push buttons to a row of LEDs_ |
| PWM              | [[Practice projects/MSP430 Project 2\|MSP430 Project 2]]  #Basics<br>Make use of Pulse Width Modulation.<br>_This code regulates the brightness level of  a LED_                          |

---

## References

(1)  [MSP430 LaunchPad with MSP430G2553 Pins Maps - Embedded Computing](https://embeddedcomputing.weebly.com/msp430-launchpad-with-msp430g2553-pins-maps.html)
(2)  [MSP430G2553 data sheet, product information and support | TI.com](https://www.ti.com/product/MSP430G2553?keyMatch=MSP430G2553&tisearch=universal_search&usecase=GPN-ALT#params)