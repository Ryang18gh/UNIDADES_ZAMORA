#include<stdio.h>
#include<stdlib.h>
int main(){
int Vector[100];
int i;
i=100;
while(i>0){

    Vector[i]=i-1;
    printf("%d, ",Vector[i]);
    i--;
}

    return 0;
}