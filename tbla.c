#include <stdio.h>

int main() {
    int i, j;

    // Este bucle recorre las tablas del 1 al 10
    for (i = 1; i <= 10; i++) {
        printf("Tabla del %d:\n", i);
        // Este bucle recorre los multiplicadores del 1 al 10 para cada tabla
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }

    return 0;
}