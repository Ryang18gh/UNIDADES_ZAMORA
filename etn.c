#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int*p,y;
void func()
{
    int x=40;
    p=&x;
    y=*p;
    *p=23;

}
int main(void)
{
    func();
    y=*p;
    *p=25;
    printf("el valor de y es %d \nEl valor de *p es %d \b el valoe de p es %p ", y ,*p,p);
    
}