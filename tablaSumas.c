#include<stdio.h>
#include<stdlib.h>
int main(){
int numeroU=3;
int suma=3;
int i;
suma=1;
    printf("%d\t%d+2\t%d+4\t%d+6\n",numeroU,numeroU,numeroU,numeroU);
  //  scanf("%d",&numeroU);

for(i=0; i<=numeroU;i++){
printf("%d\t",suma);
suma=numeroU+2;


}

    return 0;
}