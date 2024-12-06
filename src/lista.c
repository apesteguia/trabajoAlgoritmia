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
    l->arrayVecinos = (Vecino *)malloc(sizeof(Vecino) * k);
    if (l->arrayVecinos == NULL) {
        printf("ERROR: NO SE PUEDE ASIGNAR MEMORIA PARA ARRAY DE VECINOS\n");
        exit(1);
    }
}

void insertar(ListaPersonas *l, Persona p) {
    NodoLista *nuevo;

    nuevo = (NodoLista *)malloc(sizeof(NodoLista));
    if (nuevo == NULL) {
        printf("ERROR: NO SE PUEDE ASIGNAR MAS MEMORIA PARA INSERTAR\n");
        return;
    }
    nuevo->p = p;
    nuevo->sig = NULL;

    if (esNulaLista(*l)) {
        l->ini = nuevo;
        l->fin = nuevo;
    } else {
        l->fin->sig = nuevo;
        l->fin = nuevo;
    }
}

bool esNulaLista(ListaPersonas l) { return (l.ini == NULL && l.fin == NULL); }

void mostrarLista(ListaPersonas l) {
    NodoLista *aux;
    int i;

    if (esNulaLista(l)) {
        printf("Lista vacia\n");
        return;
    }

    i = 1;
    aux = l.ini;
    while (aux != NULL) {
        // Hacer print de la persona

        aux = aux->sig;
        i++;
    }
}

void calcularVecinosMasCercanos(ListaPersonas l, Persona p, int n) {}

void vaciarLista(ListaPersonas *l) {
    if (!esNulaLista(*l)) {
        NodoLista *idx, *aux;

        idx = l->ini;
        while (idx != NULL) {
            aux = idx;
            idx = idx->sig;
            free(aux);
        }

        l->ini = NULL;
        l->fin = NULL;
    }
}

// float calcularDistancia(Persona, Persona);
// float calcularDistancia(Persona, Persona);
