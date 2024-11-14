---
{"dg-publish":true,"permalink":"/embedded-sys-design-using-uml/moore-machine/"}
---

---
In this machine, **the output is determined only by the present active state** of the state machine and not by any input events.

- There are no <font color="#50E3C2">Output</font> during state transition.

![Moore machine.png](/img/user/Embedded%20Sys%20Design%20using%20UML/Reference%20images/Moore%20machine.png)
- <font color="#50E3C2">Output</font> is represented inside the state
- <font color="#50E3C2">Output</font> is also called "Action".
- In the Moore model the <font color="#50E3C2">Output</font> is also called "Entry action" or <font color="#B5BCF5">Input</font>.

---
### Light switch state machine
In this example, a light switch is controlled with two buttons (<font color="#4D93D9">ON/OFF</font>) and each state is reached through them. The state name is on the blue part of each rectangle and the process being executed is on the bottom white part. 

The blue <font color="#4D93D9">ON</font> and <font color="#4D93D9">OFF</font> represent actions from the user and the bridge between each state.

![Pasted image 20241112002117.png](/img/user/Embedded%20Sys%20Design%20using%20UML/Reference%20images/Pasted%20image%2020241112002117.png)

#### State transition table - Light control Moore machine

In this representation, we start from a state and an output and wait for an input event to transition to a different state. From there, we shall go back to the left of the table and start again.

![Pasted image 20241112103903.png](/img/user/Embedded%20Sys%20Design%20using%20UML/Reference%20images/Pasted%20image%2020241112103903.png)

- When the state machine enters the "OFF" state, it executes the <font color="#D86DCD">Light OFF</font> entry action and waits until an input event is received.
	- If the input event received is <font color="#4D93D9">ON</font>, the state machine moves to the state "Dim".
	- If the input event received is <font color="#4D93D9">OFF</font>, event is ignored.