---
{"dg-publish":true,"permalink":"/embedded-sys-design-using-uml/mealy-machine/"}
---

---
In this machine, the **output produced by the state machine depends on the input events fed to the state machine AND present active state of the same machine.**

The <font color="#7ED321">Output</font> is not produced inside the <font color="#50E3C2">state</font>.

![Mealy model.png](/img/user/Embedded%20Sys%20Design%20using%20UML/Reference%20images/Mealy%20model.png)
- <font color="#7ED321">Output</font> is represented along with each input separated by `/`
- An "<font color="#7ED321">Output</font>" is also called "<font color="#D86DCD">Action</font>".
- In the mealy model, the "<font color="#7ED321">Output</font>" is also called "<font color="#B5BCF5">Input action</font>".

---

### Light switch state machine
In this example, the light switch has two buttons (<font color="#4D93D9">ON/OFF</font>) and 4 states (**OFF, DIM, Medium bright, Bright**) and depending on which button is pressed and the _previous state_ the next state will change.

Only one button (<font color="#4D93D9">ON</font>) is necessary to transition from the initial state to the final state (**Bright**).
The <font color="#4D93D9">OFF</font> button can turn off the lamp from any state.

![Pasted image 20241112101637.png](/img/user/Embedded%20Sys%20Design%20using%20UML/Reference%20images/Pasted%20image%2020241112101637.png)

#### State transition table - Light control Mealy machine

The Mealy machine can also be represented in table form. Here, the present state can be used as a starting point to analyze what will happen when an input is introduced, both the next state and the output can be known from there.

![Pasted image 20241112103750.png](/img/user/Embedded%20Sys%20Design%20using%20UML/Reference%20images/Pasted%20image%2020241112103750.png)

- When the state machine is in "OFF" state and if:
	- Input event "<font color="#4D93D9">ON</font>" is received, then the state machine produces the output "<font color="#D86DCD">Dim the light</font>" and makes a transition to "Dim" state.
	- Input event "<font color="#4D93D9">OFF</font>" is received, the event is ignored.