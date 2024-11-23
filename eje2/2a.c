#include "2a.h"
#include <string.h>
#include <stdio.h>

void ejercicio2a() {
    char str1[] = "Hola";
    char str2[] = "Mundo";
    int comparison = strcmp(str1, str2);
    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }
}