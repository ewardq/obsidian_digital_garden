---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-and-cpp-concepts/c-class-vs-c-structs/"}
---

---

_C language_
Here the struct contains all the elements inside the declaration. There is also an anonymous struct and a union inside.
```C
#include <stdio.h>
#include <string.h>

struct Humano{
	char nombre[30];
	int edad;
	struct{             // Anonymous structure
		char calle[30]
		int numero;
		char ciudad[30];
	}
	union{              // Anonymous union
		char dni[10];
		char pasaporte[25];
	}
	float altura;
};

int main(){
	struct Humano juan;
	strcpy(juan.nombre, "juan");
	juan.edad = 30;
	strcpy(juan.calle, "Av Jazmines");
	juan.numero = 752;
	strcpy(juan.ciudad, "Lima");
	juan.altura = 1.75;
	snprintf(juan.dni, sizeof(juan.dni), "1234");

	printf("Nombre: %s\n", juan.nombre);
	printf("Direccion: %s %d %s\n", juan.calle, juan.numero, juan.ciudad);
	printf("DNI: %s\n", juan.dni);
	return 0;
}
```

---

_C++ language variant 1_
Here the function prototypes are inside the class declaration and they are implemented outside the  brackets of  `Human`.
```C++
#include <iostream>
#include <string.h>

struct Humano{
	private:
		char nombre[30];
		int edad;
	public:
		Humano(const char* nombre, int edad);
		void hablar();
}

Humano::Humano(const char* nombre, int edad){
	strcpy(this->nombre, nombre);
	this->edad = edad;
}

void Humano::hablar(){
	printf("Hola soy %s\n", nombre);
}


int main(){
	Humano juan = Humano("Juan", 27);
	juan.hablar();
	return 0;
}
```

_C++ language variant 2_
Here the methods are implemented inside the class declaration.
```C++
#include <iostream>
#include <string.h>

struct Humano{
	private:
		char nombre[30];
		int edad;
	public:
		Humano(const char* nombre, int edad){
			strcpy(this->nombre, nombre);
			this->edad = edad;
		}
		
		void hablar(){
			printf("Hola soy %s\n", nombre);
		}
}

int main(){
	Humano juan = Humano("Juan", 27);
	juan.hablar();
	return 0;
}
```


---
---
## Implement the code with libraries

The following code in C++ can be chopped down to make it more modulare and easier to use in other codes. 
```C++
#include <iostream>
#include <string.h>
/******************* .h ******************************/
struct Humano{
	private:
		char nombre[30];
		int edad;
	public:
		Humano(const char* nombre, int edad);
		void hablar();
}

/******************* .cpp ****************************/
Humano::Humano(const char* nombre, int edad){
	strcpy(this->nombre, nombre);
	this->edad = edad;
}

void Humano::hablar(){
	printf("Hola soy %s\n", nombre);
}

/******************* main.cpp **************************/
int main(){
	Humano juan = Humano("Juan", 27);
	juan.hablar();
	return 0;
}
```

## Resulting in:

_main.cpp_
```C++
#include <iostream>
#include <string.h>

#include "lib.h"

int main(){
	Humano juan = Humano("Juan", 27);
	juan.hablar();
	return 0;
}
```

_lib.h_
```C++
#ifdef LIB_H
#define LIB_H

struct Humano{
	private:
		char nombre[30];
		int edad;
	public:
		Humano(const char* nombre, int edad);
		void hablar();
}

#endif
```

_lib.cpp_
```C++
#include "lib.h"

Humano::Humano(const char* nombre, int edad){
	strcpy(this->nombre, nombre);
	this->edad = edad;
}

void Humano::hablar(){
	printf("Hola soy %s\n", nombre);
}
```