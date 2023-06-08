#include <stdio.h>
#include <stdlib.h>

int main() {

   
   #ifdef __BYTE_ORDER__
        #if __BYTE_ORDER__ == __ORDER_BIG_ENDIAN
            printf("La arquitectura es big endian.\n");

        #elif __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN
            printf("La arquitectura es big endian.\n");
        #else
            printf("La arquitectura se desconoce\n");
        #endif 
    #else
        printf("No se puede determinar la arquitectura");
    #endif       
   
   return 0;
}