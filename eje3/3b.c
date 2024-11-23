#include "3b.h"
#include <stdio.h>

void ejercicio3b() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return;
    }
    fprintf(file, "Hola, mundo!\n");
    fclose(file);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return;
    }
    char buffer[50];
    fscanf(file, "%s", buffer);
    printf("Leido del archivo: %s\n", buffer);
    fclose(file);
}
