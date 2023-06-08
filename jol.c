#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>
#define ARRAY_SIZE 20000

static inline uint64_t rdtsc(){
    uint32_t lo, hi;
    __asm__ volatile("rdtsc" : "=a" (lo), "=d" (hi));
    return ((uint64_t)hi << 32) |lo;
}
int main() {

    const char* command= "/usr/bin/xdg-open /home/alex/Documentos/MetodosNumericos/PROYECTOS_ZAMORA.odt";
    int* array=(int*)malloc(sizeof(int)*ARRAY_SIZE);
    srand(time(NULL));

    for (int i = 0; i < ARRAY_SIZE; i++){
        array[i]=rand() % ARRAY_SIZE;
    }
    
    uint64_t inicio=rdtsc();
    int resultado= system(command);
    uint64_t fin=rdtsc();
    uint64_t ciclos= fin-inicio;
    uint64_t numHits=0;
    uint64_t numMiss=0;

    for (int i = 0; i < ARRAY_SIZE; i++){
        int valor=array[i];
        if (array[valor]==valor){
            numHits++;
        }else{
            numMiss++;
        }
    }
    

    printf("La aplicación usó: %lu ciclos de reloj\n", ciclos);
    printf("N° de Hits: %lu\n", numHits);
    printf("N° de Misses: %lu\n", numMiss);
    free(array);

    return 0;
}