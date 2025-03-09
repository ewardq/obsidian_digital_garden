---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-and-cpp-concepts/holder-3/"}
---

---

_C language_
```C
/******************************     HERENCIA      *************************/
#include <iostream>

class Humano{  //CLASE PADRE, CLASE BASE
    protected:
        std::string nombre;
        int edad;
    public:
        Humano(std::string n,int e);
        void hablar();
};

struct Notas{
    private:
        float nota1, nota2, promedio;
    public:
        Notas(float n1, float n2);
        void mostrarNotas();
};

class Estudiante: public Humano{ //CLASE HIJA, SUBCLASE
    private:
        std::string codigo;
        std::string carrera;
        Notas notas;
    public:
        Estudiante(const std::string ca, const std::string co, std::string n,int e, float n1, float n2);
        void presentarse();
};


int main()
{
    Estudiante juan("Medicina","1234","Juan",27,16,4);
    juan.presentarse();
    juan.hablar();
    return 0;
}


Estudiante::Estudiante(const std::string ca, const std::string co, std::string n,int e, float n1, float n2):Humano(n,e),carrera(ca),codigo(co), notas(n1,n2){}

void Estudiante::presentarse(){
        std::cout<<"Me llamo "<<nombre<<" y soy un estudiante de "<<carrera<<"\n";
        notas.mostrarNotas();
    }

Humano::Humano(std::string n,int e):nombre(n),edad(e){}

void Humano::hablar(){
        std::cout<<"Hola soy "<<nombre<<"\n";
    }

Notas::Notas(float n1, float n2): nota1(n1), nota2(n2){
    promedio=((nota1+nota2)/2);
}

void Notas::mostrarNotas(){
    std::cout<<"Promedio de notas : "<<promedio<<"\n";
}
```

---
_C language_
```C
/******************************     HERENCIA      *************************/
#include <iostream>

class Humano{  //CLASE PADRE, CLASE BASE
    protected:
        std::string nombre;
        int edad;
    public:
        Humano(std::string n,int e);
        void hablar();
};

class Estudiante: public Humano{ //CLASE HIJA, SUBCLASE
    private:
        std::string codigo;
        std::string carrera;
    public:
        Estudiante(const std::string ca, const std::string co, std::string n,int e);
        void presentarse();
};


int main()
{
    Estudiante juan("Medicina","1234","Juan",27);
    juan.presentarse();
    juan.hablar();
    return 0;
}


Estudiante::Estudiante(const std::string ca, const std::string co, std::string n,int e):Humano(n,e),carrera(ca),codigo(co) {}

void Estudiante::presentarse(){
        std::cout<<"Me llamo "<<nombre<<" y soy un estudiante de "<<carrera<<"\n";
    }

Humano::Humano(std::string n,int e):nombre(n),edad(e){}

void Humano::hablar(){
        std::cout<<"Hola soy "<<nombre<<"\n";
    }
```