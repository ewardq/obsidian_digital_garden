---
{"dg-publish":true,"permalink":"/electronic-projects/monostable-oscillator-with-range-from-0-1-hz-to-100k-hz/"}
---

---
The objective of this project is to get a square wave with a variable frequency from 0.1Hz to 100kHz. 

To achieve this, we'll make use of a jumper that connects different arranges of capacitors to the NE555 integrated circuit so the resulting frequency range can vary.

This oscillator has **6 frequency ranges**.

|     Range      | Pin number |
| :------------: | :--------: |
|  0.1Hz - 1Hz   |     1      |
|   1Hz - 10Hz   |     2      |
|  10Hz - 100Hz  |     3      |
|  100Hz - 1kHz  |     4      |
| 1kHz - 100kHz  |     5      |
| 10kHz - 100kHz |     6      |

In order to get this ranges, we start from the generic 555 oscillator:

![Pasted image 20241123192249.png](/img/user/Electronic%20projects/Reference%20images/Pasted%20image%2020241123192249.png)

Here, the individual times required to complete one charge and discharge cycle of the output (VO1) is given by the resistors **Ra**, **Rb** and the capacitor **C1** as follows:

$$ \begin{align*} &t_{1} = 0.693(R_{a} + R_{b})
&t_{2} = 0.693(R_{2})(C_{1})
\end{align*} 
$$
Where, R is in Ohm’s and C in Farads.
Since it's easier to variate a resistor, we'll propose two of these resistors and calculate from there the needed capacitance required to fulfill the frequency band.

$$ \begin{align*} &R_{a} = 50\Omega
\end{align*} 
$$

### Here's the schematic

![Pasted image 20241123201652.png](/img/user/Electronic%20projects/Reference%20images/Pasted%20image%2020241123201652.png)

Where the frequency range is determined by a equivalent capacitor (**Ceq**), which is connected through a selector jumper.

![Pasted image 20241123202132.png](/img/user/Electronic%20projects/Reference%20images/Pasted%20image%2020241123202132.png)

### Here's the completed PCB

|Front side     |   Back side  |
| --- | --- |
|   ![coverimg](https://ewardq.vercel.app/img/user/Digital%20Garden/Icons-and-images/Oscilador_front.jpg)  |   ![coverimg](https://ewardq.vercel.app/img/user/Digital%20Garden/Icons-and-images/Oscilador_back.jpg)  |

