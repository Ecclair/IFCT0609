#include <stdio.h>

int main()
{
    int opcion;
    float numero;
    
    printf("Elije una opcion:\n1. Pesetas a euros\n2. Euros a Pesetas\n");
    scanf("%i", &opcion);
    if (opcion == 1)
    {
        printf("Numero de Pesetas: ");
        scanf("%f", &numero);
        printf("\nTus pesetas equivalen a %.2f Euros",numero*0.006);
    }
    if (opcion == 2)
    {
        printf("Numero de Euros: ");
        scanf("%f", &numero);
        printf("\nTus Euros equivalen a %.2f Pesetas",numero*166.6);
    }
    
    
    return 0;
}
