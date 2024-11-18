#include <stdio.h>
#include "lista.h"
#include "lectura.h"
#include <string.h>
#include <stdlib.h>

#define TAM_RUTA 256

int main(int argc, char **argv) {
    char ruta[TAM_RUTA];
    int k;

    if (argc <= 1) { // NO hay argumentos
    }
    else if (argc == 3) { // Si hay argumentos
        strncpy(ruta, argv[1], sizeof(char) * (TAM_RUTA - 1));
        ruta[TAM_RUTA - 1] = '\0';

        k = atoi(argv[2]);
        printf("%d\n", k);
    }
    else {
        printf("Numero de argumentos invalido, (ruta a dataset, numero k).\n");
    }

    return 0;
}
