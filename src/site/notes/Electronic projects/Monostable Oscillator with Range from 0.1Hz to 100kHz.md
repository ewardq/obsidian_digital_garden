---
{"dg-publish":true,"permalink":"/electronic-projects/monostable-oscillator-with-range-from-0-1-hz-to-100k-hz/","contentClasses":"cards cards-cols-2 cards-cover cards-cover-no-border cards-title-hide-icons"}
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
&t_{2} = 0.693(R_{b})(C_{1})
\end{align*} 
$$
_Where, R is in Ohm’s and C in Farads._

And the frequency (T) is given as follows:
$$ \begin{align*} F = \frac{1}{T}
\end{align*} 
$$
_Where, F is in Hertz and T is in seconds._

We're going to start from the maximum desired frequency for the oscillator, `100kHz` 
$$ \begin{align*} F = \frac{1}{T}
\end{align*} 
$$
$$ \begin{align*} T = \frac{1}{F}
\end{align*} 
$$
$$ \begin{align*} F = \frac{1}{100,000Hz} = 1x10^{-5}seconds
\end{align*} 
$$
From this, to make a roughly we'll divide this time between the ON time (t1) and the OFF time (t2).  

$$ \begin{align*} &t_{1} = 6x10^{-6}seconds
&t_{2} = 4x10^{-6}seconds
\end{align*} 
$$
Since it's easier to variate a resistor, we'll propose two of these resistors and calculate from there the needed capacitance required to fulfill the frequency band.

$$ \begin{align*} &R_{a} = 50\Omega
\end{align*} 
$$
And from there we need a second resistor that has a minimum value so it won't ever reach the value of zero ohms and add a variable resistor so we can go from the minimum frequency and the maximum frequency.

![ResistorB_555.png](/img/user/Electronic%20projects/Reference%20images/ResistorB_555.png)

From here, we'll calculate each condenser so it matches the frequency range to each resistor.

![Pasted image 20241123202132.png](/img/user/Electronic%20projects/Reference%20images/Pasted%20image%2020241123202132.png)
# Schematic

![Pasted image 20241123201652.png](/img/user/Electronic%20projects/Reference%20images/Pasted%20image%2020241123201652.png)

Where the frequency range is determined by a equivalent capacitor (**Ceq**), which is connected through a selector jumper.

---

| Cover                                                                                                      | Title                                                      | Description                                                                                                |
| ---------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------- |
| ![coverimg\|250](https://ewardq.vercel.app/img/user/Digital%20Garden/Icons-and-images/Oscilador_front.jpg) | Monostable Oscillator Circuit Front Side  | This is the finished 555 circuit oscillator. There is a LED indicator and an output to take that signal and use it in other circuits!      | 
| ![coverimg\|150](https://ewardq.vercel.app/img/user/Digital%20Garden/Icons-and-images/Oscilador_back.jpg)     | Monostable Oscillator Circuito Back Side     | Te back of this circuit was coated with stain to it wouldn't rust away. | 

{ .block-language-dataview}