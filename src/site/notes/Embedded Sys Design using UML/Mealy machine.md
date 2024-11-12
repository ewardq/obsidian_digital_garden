---
{"dg-publish":true,"permalink":"/embedded-sys-design-using-uml/mealy-machine/"}
---

---
In this machine, the output produced by the state machine depends on the input events fed to the state machine AND present active state of the same machine.

The output is not produced inside the state.

![Mealy model.png](/img/user/Embedded%20Sys%20Design%20using%20UML/Reference%20images/Mealy%20model.png)
- Output is represented along with each input separated by `/`
- An "Output" is also called "Action".
- In the mealy model, the "Output" is also called "Input action".

---

### Light switch state machine
In this example, the light switch has two buttons (ON, OFF) and 4 states (OFF, DIM, Medium bright, Bright) and depending on which button is pressed and the _previous state_ the next state will change.

Only one button (ON) is necessary to transition from the initial state to the final state (Bright).
The OFF button can turn off the lamp from any state.

![Pasted image 20241112002043.png](/img/user/Embedded%20Sys%20Design%20using%20UML/Reference%20images/Pasted%20image%2020241112002043.png)