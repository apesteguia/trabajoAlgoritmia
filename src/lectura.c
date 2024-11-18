#include "lectura.h"
#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void leeFila(FILE *f, char *buf);
static void guardaPersona(ListaPersonas *, const char *);

void leerDatos(ListaPersonas *l, const char *ruta) {
    FILE *f;
    char buffer[TAM_BUFFER];

    f = fopen(ruta, "r");
    if (f == NULL) {
        printf("ERROR: NO SE HA PODIDO ABRIR EL ARCHIVO EN LEER DATOS\n");
        exit(1);
    }

    leeFila(f, buffer);
    while (!feof(f)) {
        leeFila(f, buffer);
        if (strlen(buffer) > 30) {
            guardaPersona(l, buffer);
        }
    }

    fclose(f);
}

void leerPersonaPantalla(Persona *p) {
    char buffer[TAM_BUFFER];

    // pedir para cada atributo
    printf("\nIntroduce el genero (Male/Female): ");
    scanf("%255[^\n]", buffer);
    if (!strcmp(buffer, "Male")) {
        p->genero = 0.0;
    } else {
        p->genero = 1.0;
    }
}

static void leeFila(FILE *f, char *buf) {
    fscanf(f, "%[^\n]", buf);
    fgetc(f);
}

static void guardaPersona(ListaPersonas *l, const char *buffer) {
    Persona p;

    // Partir la cadena en cada atributo insertar

    insertar(l, p);
}
