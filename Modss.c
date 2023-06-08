#include<stdio.h>
#include<stdlib.h>
int main(){
int A["3","4","6","8","4","7","8","5","3","1"];
int B[3,4,6,8,9,1,2,3,0,9];
int a;
a=B[A[1]]-(A[9]);

printf("%d",a);

    return 0;
}