---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/if-statement/"}
---

---
Where **if** and only **if** the expression evaluation is TRUE (nonzero) the statements inside the block will be executed.
## Single statement execution

```c++
if (expression)
	statement;
```

## Multiple statement execution

```c++
if (expression){
	statement__1;
	statement__2;
	statement__3;
	statement__n;
}
```

---
## Another form of the if statement

It is also possible to use only one variable inside an `if` statement to evaluate if the code block should be executed.
```c++
uint8_t isButtonPressed = 0;

int main(void){
	if (isButtonPressed){
		printf("Turn on the LED\n");
		isButtonPressed = 0;
	}

	return 0;
}
```

_subroutine for button_
```c++
// Interrupt handler for button press
void ISR_button(void){
	isButtonPressed = 1;
}
```