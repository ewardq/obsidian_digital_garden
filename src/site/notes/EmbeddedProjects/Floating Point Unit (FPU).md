---
{"dg-publish":true,"permalink":"/embedded-projects/floating-point-unit-fpu/"}
---

---

# Enabling the Floating Point Unit

---

# FPU driver for NUCLEO STM32 boards

FPU.c
```c++
#include "stm32f4xx.h"
#include "fpu.h"

void fpu_enable(void){
/* Enable floating point unit: Enable CP10 and CP11 full access*/
SCB->CPACR |= (1<<20); // Set only bit 20 to ONE
SCB->CPACR |= (1<<21); // Set only bit 21 to ONE
SCB->CPACR |= (1<<22); // Set only bit 22 to ONE
SCB->CPACR |= (1<<23); // Set only bit 23 to ONE
}
```

How to use it in `main()` file
main.c
```c#
#include <stm32f4xx.h>
#include "fpu.h"

#define GPIOAEN (1U<<0) // Bit number zero is set to 1
#define PIN5 (1U<<5)
#define LED_PIN PIN5 // Give it another name so it's more readable

int main(void){

/* Enable FPU */
fpu_enable();

while(1){
	GPIOA->ODR ^= LED_PIN;
	for(int i = 0; i < 100000; i++){}
	}
}
```