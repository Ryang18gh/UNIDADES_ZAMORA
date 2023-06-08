#include <stdio.h>

int maximo(int num1, int num2)
{
    int max;

    if (num1 > num2)
        max = num1;
    else
        max = num2;

    return max;
}

int main()
{
    int a, b, resultado;

    printf("Introduzca dos números: ");
    scanf("%d %d", &a, &b);

    resultado = maximo(a, b);

    printf("El máximo es: %d\n", resultado);

    return 0;
}

