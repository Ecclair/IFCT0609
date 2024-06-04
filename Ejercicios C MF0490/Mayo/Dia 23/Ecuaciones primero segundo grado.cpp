#include <stdio.h>
#include <math.h>
// resolver ecuaciones de primer y segundo grado
int main()
{
    int a,b,c,aux;
    printf("Numero 1: ");
    scanf("%i",&a);
    printf("Numero 2: ");
    scanf("%i",&b);
    printf("Numero 3: ");
    scanf("%i",&c);

    if(a>b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if(a>c)
    {
        aux = a;
        a = c;
        c = aux; 
    }
    if(b>c)
    {
        aux = b;
        b = c;
        c = aux; 
    }
printf("Los numeros ordenados de menor a mayor son: %i %i %i", a,b,c);

return 0;


}


