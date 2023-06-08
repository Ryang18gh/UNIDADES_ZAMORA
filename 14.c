#include <stdio.h>

int main() {
    // Bucle exterior para recorrer los multiplicandos del 1 al 10
    for (int i = 1; i <= 10; i++) {
        printf("Tabla de multiplicar del %d:\n", i);
        
        // Bucle interior para recorrer los multiplicadores del 1 al 10
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n"); // Imprime una línea en blanco después de cada tabla
    }

    return 0;
}

