---
{"dg-publish":true,"permalink":"/digital-garden/embedded-system-design-using-uml-state-machines/"}
---

---
#### What is a State Machine (FSM)?
A state machine is a software model of computation, and it comprises finite number states. Hence it is also called a **Finite State Machine** (FSM).

![State machine example.png](/img/user/Embedded%20Sys%20Design%20using%20UML/Reference%20images/State%20machine%20example.png)

Since **states are finite**, there is a finite number of transitions among the states. Transitions are triggered by the input events fed to the state machine (FSM is an event-driven system).
A state machine also produces an output. The output produced depends on the current state of the state machine and the input events fed to the state machine.


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/embedded-sys-design-using-uml/benefits-of-using-state-machines-fs-ms/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---

- They are used to **describe situations or scenarios of your application** (Modelling the life cycle of a reactive object through interconnections of states).
- FSMs are **helpful to model complex applications** that involve lots of decision-making, producing different outputs (actions), and processing various events.
- State machines are visualized through state machine diagrams in the form of state charts, which **helps to communicate between non-developers and developers**.
- Makes it easier to visualize and implement the changes to the behavior of the project.
- Complex application can be visualized as a collection of different states processing a fixed set of events and producing a fixed set of outputs.
- **Loose coupling**: An application can be divided into multiple behaviors or state machines, and each unit can be tested separately or could be reused in other applications.
- Scalable
- Narrow down whole application complexity to state level complexity, analyze and implement.

</div></div>


---
#### Types of state machines

-  [[Embedded Sys Design using UML/Mealy machine\|Mealy machine]]
- [[Embedded Sys Design using UML/Moore machine\|Moore machine]]
- [[Harel state charts\|Harel state charts]]
- [[UML state machines\|UML state machines]]

