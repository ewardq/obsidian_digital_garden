---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-and-cpp-concepts/how-to-emulate-class-structures-from-c-to-c/"}
---

---

_C language_
```C
#include <stdio.h>
#include <string.h>

struct Humano{
	char nombre[30];
	int edad;
	void (*imprimir)(struct Humano *); // Puntero a función
};

void imprimirDatos(struct Humano *p){
	printf("El nombre es: %s\n", p->nombre);   // (*p).nombre
	printf("La edad es: %d\n", p->edad);
}

struct Humano crearHumano(const char *nombre, int edad){
	struct Humano p;
	strcpy(p.nombre, nombre);
	p.edad = edad;
	p.imprimir = imprimirDatos;
	return p;
}

int main(){
	struct Humano juan = crearHumano("Juan", 27);
	juan.imprimir(&juan);
	return 0;
}
```

---

_C++ language_
```C++
#include <stdio.h>
#include <string.h>

struct Humano{
	char nombre[30];
	int edad;
	Humano(const char *nombre, int edad){ // Constructor
		strcpy(this->nombre, nombre);
		this->edad = edad;
	}
	void imprimirDatos(){
		printf("El nombre es: %s\n", nombre);
		printf("La edad es: %d\n", edad);
	}
};

/*
struct HUmano crearHumano(const char *nombre, int edad){
	struct Humano p;
	strcpy(p.nombre, nombre);
	p.edad = edad;
	return p;
}
*/

int main(){
	//struct Humano juan = crearHumano("Juan", 27);
	//Humano juan = Humano("Juan", 27);
	Humano juan("Juan", 27);
	juan.imprimirDatos();
	return 0;
}
```
