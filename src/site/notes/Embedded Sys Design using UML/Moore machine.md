---
{"dg-publish":true,"permalink":"/embedded-sys-design-using-uml/moore-machine/"}
---

---
In this machine, **the output is determined only by the present active state** of the state machine and not by any input events.

- There are no output during state transition.

![Moore machine.png](/img/user/Embedded%20Sys%20Design%20using%20UML/Reference%20images/Moore%20machine.png)
- Output is represented inside the state
- "Output" is also called "Action".
- In the Moore model the "Output" is also called "Entry action".

---
### Light switch state machine
In this example, a light switch is controlled with two buttons (ON/OFF) and each state is reached through them. The state name is on the blue part of each rectangle and the process being executed is on the bottom white part. 

The blue ON and OFF represent actions from the user and the bridge between each state.

![Pasted image 20241112002117.png](/img/user/Embedded%20Sys%20Design%20using%20UML/Reference%20images/Pasted%20image%2020241112002117.png)