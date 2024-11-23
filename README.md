
# Librería Estándar de C

Repositorio: [Librería Estándar de C](https://github.com/cdiezgaruax/Libreria-estandar-de-C)

---

## Enunciado

### 1. Las funciones comunes del lenguaje C (`<stdlib.h>`)

#### a. Uso de `abs()` para calcular el valor absoluto de un número entero

```c
#include <stdlib.h>
#include <stdio.h>

int main() {
    // Declarar un número negativo
    int num = -10;

    // Obtener el valor absoluto utilizando abs()
    int abs_num = abs(num);

    printf("El valor absoluto de %d es %d\n", num, abs_num);

    return 0;
}
```

#### b. Uso de `rand()` y `srand()` para generar números aleatorios

```c
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(0)); // Cambiar la semilla para obtener diferentes números aleatorios

    int random_number = rand();
    printf("Número aleatorio: %d\n", random_number);

    return 0;
}
```

---

### 2. Cadenas (`<string.h>`)

#### a. Uso de `strcmp()` para comparar dos cadenas

```c
#include <string.h>
#include <stdio.h>

int main() {
    char str1[] = "Hola";
    char str2[] = "Mundo";

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;
}
```

#### b. Uso de `strlen()` para calcular la longitud de una cadena

```c
#include <string.h>
#include <stdio.h>

int main() {
    char str[] = "Hola mundo";

    int length = strlen(str);

    printf("La longitud de '%s' es: %d\n", str, length);

    return 0;
}
```

---

### 3. Archivos (`<stdio.h>`)

#### a. Uso de `fopen()` para abrir un archivo de texto

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return 1;
    }

    // Cerrar el archivo al final
    fclose(file);

    return 0;
}
```

#### b. Uso de `fprintf()` para escribir en un archivo y `fscanf()` para leerlo

```c
#include <stdio.h>

int main() {
    // Abrir archivo para escritura
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }

    fprintf(file, "Hola, mundo!\n");

    // Cerrar el archivo después de escribir
    fclose(file);

    // Abrir archivo para lectura
    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    char buffer[50];
    fscanf(file, "%s", buffer);

    printf("Leído del archivo: %s\n", buffer);

    // Cerrar el archivo después de leer
    fclose(file);

    return 0;
}
