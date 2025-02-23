---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-and-cpp-concepts/append-node-to-linked-list-tail/"}
---

---

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
    
    return 0;
}
```

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

void printL(struct Nodo* cabeza){
    struct Nodo* temp = cabeza;
    while(temp != NULL){
        printf("%d -> ", temp->dato);
        temp = temp->siguiente;
    }
    printf("NULL\n");
}

void insertInit(struct Nodo** cabeza,int dato ){
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = *cabeza;
    *cabeza = nuevoNodo;
}

void clear(struct Nodo** cabeza){
    struct Nodo* temp;
    while(*cabeza != NULL){
        temp = *cabeza;
        *cabeza = (*cabeza)->siguiente;
        free(temp);
    }
    printf("Lista eliminada\n");
}

int main()
{
    struct Nodo* cabeza = NULL;
    //Agregar nodos al final de la lista
    append(&cabeza,10);
    append(&cabeza,20);
    append(&cabeza,30);
    insertInit(&cabeza,40);
    
    printL(cabeza);
    
    clear(&cabeza);
    append(&cabeza,30);
    
    printL(cabeza);
    
    return 0;
}

```
