// Pide 10 numeros y preguntar por uno, mostrar si esta en el array y en que posicion

#include <stdio.h>

int main()
{
    int numeros[10];
    int busqueda;
    
    for (int i = 0; i <= 9; i++)
    {
        printf("Introduce un numero: ");
        scanf("%i", &numeros[i]);
    }

    printf("Dime un numero para buscar: ");
    scanf("%i", &busqueda);

    for (int i = 0; i <= 9; i++)
    {
        if (busqueda == numeros[i])
        {
            printf("El numero %i esta en la posicion %i\n", busqueda, i);
        }
        if (busqueda != numeros[i])
        {
            printf("El numero %i no esta en el array", busqueda);
            break;
        }
    }
    
    return 0;
}
