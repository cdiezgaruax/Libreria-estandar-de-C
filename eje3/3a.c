#include "3a.h"
#include <stdio.h>

void ejercicio3a() {
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return;
    }
    fclose(file);
}