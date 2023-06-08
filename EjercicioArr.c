#include <stdio.h>
#include <stdlib.h>

int main (){
    int vector [100];
    int i;

    i=0;
    while (i<101){

    
    vector [i]=i*2;
    printf ("2*");
    printf  ("%d", i);
    printf  ("=");
    printf  ("%d", vector [i]);
    printf  ("\n");

    i++;
    }
    return 0;


}