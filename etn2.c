#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void intercambio(int *a, int *b);
int main(void)
{
    int x = 2;
    int y = 5;
    printf("antes x= %d, y= %d\n",x,y);
    intercambio (&x, &y);
    printf("despues x = %d, y = %d\n", x,y);

}
void intercambio(int*a,int*b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;

}