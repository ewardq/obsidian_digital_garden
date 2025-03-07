---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-and-cpp-concepts/holder-2/"}
---

---

_C language_
```C
#include <iostream>
#include <string.h>

class Humano{
    private:
        char nombre[30]; //atributo
        int edad;       //atributo
    public:
        Humano(const char* n, int e);
        void hablar();
    friend class Estudiante;
};

class Estudiante{
    private:
        Humano persona;
        int codigo;
        char carrera[30];
    public:
        Estudiante(const char* c, int cod, const char* n, int e);
        void mostrarDatos();
};

int main()
{  
    Estudiante juan("Ingenieria",1234,"Juan",27);
    juan.mostrarDatos();
    return 0;
}

void Estudiante::mostrarDatos(){
            std::cout<<"Soy "<<persona.nombre<<" y tengo "<<persona.edad<<"años"<<"\n";
            
        }
        
Estudiante::Estudiante(const char* c, int cod, const char* n, int e):persona(n,e){
            strcpy(carrera,c);
            codigo = cod;
        }

Humano::Humano(const char* n, int e){ // Método constructor
            strcpy(nombre,n);
            edad = e;
        }

void Humano::hablar(){  //método
            std::cout<<"Hola soy "<<nombre<<"\n";
        }
```

---
