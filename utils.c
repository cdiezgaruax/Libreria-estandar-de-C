#include "utils.h"
#include <stdio.h>
#include "eje1/1a.h"
#include "eje1/1b.h"
#include "eje2/2a.h"
#include "eje2/2b.h"
#include "eje3/3a.h"
#include "eje3/3b.h"

void estructuras() {
    int ejercicio, subparte;

    printf("Selecciona el ejercicio (1, 2, 3): ");
    scanf("%d", &ejercicio);

    printf("Selecciona la subparte (1 para a, 2 para b): ");
    scanf("%d", &subparte);

    switch (ejercicio) {
        case 1:
            if (subparte == 1) {
                ejercicio1a();
            } else if (subparte == 2) {
                ejercicio1b();
            } else {
                printf("Subparte no válida.\n");
            }
            break;
        case 2:
            if (subparte == 1) {
                ejercicio2a();
            } else if (subparte == 2) {
                ejercicio2b();
            } else {
                printf("Subparte no válida.\n");
            }
            break;
        case 3:
            if (subparte == 1) {
                ejercicio3a();
            } else if (subparte == 2) {
                ejercicio3b();
            } else {
                printf("Subparte no válida.\n");
            }
            break;
        default:
            printf("Ejercicio no válido.\n");
            break;
    }
}