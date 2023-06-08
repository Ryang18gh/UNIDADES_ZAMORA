#include <stdio.h>
#include <stdlib.h>


int main() {

ifdef _BYTE_ORDER_
    #if _BYTE_ORDER_ == _ORDER_BIG_ENDIAN_
        printf("Arquitectura BIG ENDIAN\n");
    #elif _BYTE_ORDER_ == _ORDER_LITTLE_ENDIAN_
        printf("Arquitectura LITTLE ENDIAN\n");
    #else
        printf("Esta Arquitectura es DESCONOCIDA\n");
    #endif
else
    printf("No se puede determinar la arquitectura\n");
endif

    return 0;
}