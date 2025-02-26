---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-and-cpp-concepts/stacks-in-c-c/"}
---

---
_C language_
```C
#include <stdio.h>
#include <stdlib.h>
typedef struct Nodo{
    int dato;
    struct Nodo *siguiente;
}Nodo;

typedef struct{
    Nodo *tope;
}Pila;

void iniciarPila(Pila *pila){
    pila->tope = NULL;
}

void push(Pila *pila, int valor){
    Nodo *nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = pila->tope;
    pila->tope = nuevoNodo;
}

int estaVacia(Pila *pila){
    return pila->tope == NULL;
}

void mostrarPila(Pila *pila){
    if(estaVacia(pila)){
        printf("La pila está vacía\n");
        return;
    }
    Nodo *actual = pila->tope;
    while(actual != NULL){
        printf("%d ->", actual->dato);
        actual = actual->siguiente;
    }
    printf("NULL\n");
};

int pop(Pila *pila){
    if(estaVacia(pila)){
        printf("La pila está vacía\n");
        return -1;
    }
    Nodo *nodoAEliminar = pila->tope;
    int valor = nodoAEliminar->dato;
    pila->tope = nodoAEliminar->siguiente;
    free(nodoAEliminar);
    return valor;
}

int peek(Pila *pila){
    if(estaVacia(pila)){
        printf("La pila está vacía\n");
        return -1;
    }
    return pila->tope->dato;
}

void liberarPila(Pila *pila){
    while(!estaVacia(pila)){    
        pop(pila);
    }
}

int main()
{
    Pila pila;
    iniciarPila(&pila);
    push(&pila,10);
    push(&pila,20);
    push(&pila,30);
    mostrarPila(&pila);
    printf("Elemento del tope %d\n",peek(&pila));
    printf("Sacando elemento %d\n",pop(&pila));
    mostrarPila(&pila);
    liberarPila(&pila);
    mostrarPila(&pila);
    return 0;
}

```
