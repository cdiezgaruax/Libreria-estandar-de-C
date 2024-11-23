#include "1b.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void ejercicio1b() {
    srand(time(0));
    int random_number = rand();
    printf("Numero aleatorio: %d\n", random_number);
}