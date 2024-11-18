#ifndef LISTA_H
#define LISTA_H

#include <stdbool.h>

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

typedef struct vecino {
    Persona *p;      // Puntero a la persona seleccionada
    float distancia; // Distancia a esta persona
} Vecino;

typedef struct nodoLista {
    struct nodoLista *sig;
    Persona p;
} NodoLista;

typedef struct lista {
    NodoLista *ini;
    NodoLista *fin;
    int k;
    Vecino *arrayVecinos;
} ListaPersonas;

void nuevaLista(ListaPersonas *, int);
void insertar(ListaPersonas *, Persona);
bool esNulaLista(ListaPersonas);
void mostrarLista(ListaPersonas);
void calcularVecinosMasCercanos(ListaPersonas, Persona, int);
void vaciarLista(ListaPersonas *);
float calcularDistancia(Persona, Persona);
float calcularDistancia(Persona, Persona);

#endif
