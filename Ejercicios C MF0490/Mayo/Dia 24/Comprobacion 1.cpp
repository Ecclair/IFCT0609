// ¿Qué imprime el siguiente fragmento de código? Compruébalo. 
#include <stdio.h>

int main()
{
int x,y,z;
x = 2;
y = 6;
z = 4; 
y = y+4*z;
y +=x ;
printf("resultado %i",y);
return 0;
}