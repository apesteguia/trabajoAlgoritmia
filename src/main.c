#include "lectura.h"
#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    char ruta[TAM_RUTA];
    int k;
    ListaPersonas lista;

    if (argc <= 1) { // NO hay argumentos
        printf("Introduce la ruta del dataset: ");
        if (scanf("%255s", ruta) != 1) {
            printf("El tamaño maximo de ruta es %d\n", TAM_RUTA);
            return 1;
        }
        printf("\nIntroduce k: ");
        scanf("%d", &k);

        printf("\n");
        while (k < 1) {
            printf("K debe ser mayor a 1\n");
            scanf("%d", &k);
        }
    } else if (argc == 3) { // Si hay argumentos
        strncpy(ruta, argv[1], sizeof(char) * (TAM_RUTA - 1));
        ruta[TAM_RUTA - 1] = '\0';

        k = atoi(argv[2]);
        if (k < 1) {
            printf("K debe ser mayor a 1\n");
            return 1;
        }
    } else {
        printf("Numero de argumentos invalido, (ruta a dataset, numero k).\n");
    }

    nuevaLista(&lista, k);
    vaciarLista(&lista);

    return 0;
}
