#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

/*
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
*/

void nuevaLista(ListaPersonas *l, int k) {
    l->ini = NULL;
    l->fin = NULL;
    l->k = k;
    l->arrayVecinos = (Vecino*) malloc(sizeof(Vecino)*k);
    if (l->arrayVecinos == NULL) {
        printf("ERROR ASIGNANDO MEMORIA PARA ARRAY DE VECINOS\n");
        exit(1);
    }
}
void insertar(ListaPersonas *l, Persona p) {}
//bool esNulaLista(ListaPersonas l) {}
void mostrarLista(ListaPersonas l) {}
void calcularVecinosMasCercanos(ListaPersonas l, Persona p, int n) {}
void vaciarLista(ListaPersonas *l) {}
//float calcularDistancia(Persona, Persona);
//float calcularDistancia(Persona, Persona);
