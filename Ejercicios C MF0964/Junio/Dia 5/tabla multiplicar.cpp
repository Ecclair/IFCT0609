// pide numero y dame tabla de multiplicar.
#include <stdio.h>

int main()
{
    int n,i;
    
    printf("Tabla de multiplicar");
    printf("\nDime un numero: ");
    scanf("%i", &n);
    
    
    printf("La tabla de multiplicar del %i es: \n",n);
    
    for (i=1;i<=10; i++)
    {
        printf("%i * %i = %i\n",n, i,n *i);
    }

    return 0;
}
