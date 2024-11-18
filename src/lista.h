#ifndef LISTA_H
#define LISTA_H

typedef struct persona {
    float genero;
    float edad;
    float hipertension;
    float enfermedad_corazon;
    float historia_fumador;
    float bmi;
    float HbA1c;
    float nivel_glucosa_sangre;
    float diabetes;
} Persona;

typedef struct nodoLista {
    nodoLista *sig;
    Persona p;
} NodoLista;

#endif
