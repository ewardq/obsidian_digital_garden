---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-and-cpp-concepts/single-linked-list/"}
---

---
_C language_
```C
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

//  -----------------------------------------------------
//  Liberar memoria
    free(cabeza);
    free(segundo);
    free(tercero);

    return 0;
}

```

---
# Impirmir linked list con funciones

_C language_
```C
#include <stdio.h>
#include <stdlib.h>

struct Nodo{
    int dato;
    struct Nodo *siguiente;
};

void printLinkedList(struct Nodo* cabeza){
    struct Nodo* actual = cabeza;
    
    while (actual != NULL){
        printf("%d ->", actual->dato);
        actual = actual->siguiente;
    }
    printf("NULL");
}

void append(struct Nodo** cabeza,int valor){
    // ------------------------------------------------------
    // Crear el tercer nodo
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = NULL;
    
    //  -----------------------------------------------------
    //  Si cabeza está vacia, nuevoNodo ahora es cabeza
    if(*cabeza == NULL){
        *cabeza = nuevoNodo;
        return;
    }
    
    //  -----------------------------------------------------
    //  Traverse linked list
    struct Nodo* temp = *cabeza;
    while(temp->siguiente != NULL){
        temp = temp->siguiente;
    }
    
    //  -----------------------------------------------------
    //  Enlazar nodo nuevo a último nodo en lista
    temp->siguiente = nuevoNodo;
}

int main()
{
    struct Nodo* cabeza = NULL;
    //Agregar nodos al final de la lista
    append(&cabeza,10);
    append(&cabeza,20);
    append(&cabeza,30);
    
    printLinkedList(cabeza);
    
    return 0;
}
```