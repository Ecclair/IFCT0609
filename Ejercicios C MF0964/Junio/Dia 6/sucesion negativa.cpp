// muestre por pantalla la sucesión de números: 1 -1 2 -2 3 -3 4 -4 5 -5

#include <stdio.h>

int main()
{
    int i;
    
    for (i=1;i<=5;i++)
    {
        printf("%i -%i ",i,i);
    }

    return 0;
}