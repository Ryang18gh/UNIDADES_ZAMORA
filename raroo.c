#include<stdio.h>
#include<stdlib.h>
int main(){
int A[]={3,5,6,8,4,7,8,5,3,1};
int B[]={3,4,6,8,9,1,2,3,0,9};
int a;
int b;
int c;
int d;
int e;

a=A[3] % (B[2]/2);
b=B[A[1]]-A[9];
c=A[0]+A[1+2];
d=A[5]+B[5];
e=(A[3]/B[2])/2;
printf("%d \n",a);
printf("%d \n",b);
printf("%d \n",c);
printf("%d \n",d);
printf("%d \n",e);

    return 0;
}