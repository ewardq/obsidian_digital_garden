---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-and-cpp-concepts/holder/"}
---

---

_C language_
```C
#include <stdio.h>
#include <string.h>

struct Human{
	char name[30];
	int age;
	struct {
		char street[30];
		int number;
		char city[30];
	};
	float height;
};

int main(){
	struct Human juan;
	strcpy(juan.name, "juan");
	juan.age = 30;
	strcpy(juan.street, "Av. Jazmines");
	juan.number = 752;
	strcpy(juan.city, "Lima");
	juan.height = 1.75;

	printf("Name: %s\n", juan.name);
	printf("Address: %s %d %s\n", juan.street, juan.number, juan.city);
}
```

---

_C language_
```C
#include <stdio.h>
#include <stdlib.h>

struct Nodo{
    int dato;
    struct Nodo *siguiente;
};

void append(struct Nodo** cabeza,int valor){
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = NULL;
    
    if(*cabeza == NULL){
        *cabeza = nuevoNodo;
        return;
    }
    struct Nodo* temp = *cabeza;
    while(temp->siguiente != NULL){
        temp = temp->siguiente;
    }
    temp->siguiente = nuevoNodo;
}

int main()
{
    struct Nodo* cabeza = NULL;
    //Agregar nodos al final de la lista
    append(&cabeza,10);
    append(&cabeza,20);
    append(&cabeza,30);
    
    //imprimir (pendiente)
    struct Nodo* actual = cabeza;
    while (actual != NULL){
        printf("%d ->", actual->dato);
        actual = actual->siguiente;
    }
    printf("NULL\n");
    
    return 0;
}
```

---

_C language_
```C
#include <stdio.h>
#include <stdlib.h>

struct Nodo{
    int dato;
    struct Nodo *siguiente;
};

int main()
{
    struct Nodo *cabeza = NULL;
    struct Nodo *segundo = NULL;
    struct Nodo *tercero = NULL;
    
    cabeza  = (struct Nodo*)malloc(sizeof(struct Nodo));
    segundo = (struct Nodo*)malloc(sizeof(struct Nodo));
    tercero =  (struct Nodo*)malloc(sizeof(struct Nodo));
    
    cabeza->dato = 10;
    cabeza->siguiente = segundo;
    
    segundo->dato = 20;
    segundo->siguiente = tercero;
    
    tercero->dato = 30;
    tercero->siguiente = NULL;
    
    struct Nodo* actual = cabeza;
    while (actual != NULL){
        printf("%d ->", actual->dato);
        actual = actual->siguiente;
    }
    printf("NULL\n");
    free(cabeza);
    free(segundo);
    free(tercero);
    return 0;
}
```

---


_C language_
```C
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct Nodo{
    int dato;
    struct Nodo* siguiente;
};

int main()
{
    struct Nodo* cabeza = NULL;
    cabeza = (struct Nodo*)malloc(sizeof(struct Nodo));
    
    cabeza->dato = 10;
    cabeza->siguiente = NULL;

//  -----------------------------------------------------
//  Crear el segundo nodo
    struct Nodo* segundo = NULL;
    segundo = (struct Nodo*)malloc(sizeof(struct Nodo));

    segundo->dato = 20;
    segundo->siguiente = NULL;

//  -----------------------------------------------------
//  Enlazar nodos
    cabeza->siguiente = segundo;
    
// ------------------------------------------------------
// Crear el tercer nodo
    struct Nodo* tercero = NULL;
    tercero = (struct Nodo*)malloc(sizeof(struct Nodo));

    tercero->dato = 20;
    tercero->siguiente = NULL;

//  -----------------------------------------------------
//  Enlazar nodos
    segundo->siguiente = tercero;
    return 0;
}

```