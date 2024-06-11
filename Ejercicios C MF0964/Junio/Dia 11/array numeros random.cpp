// Agregar numeros random y 3 intentos

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    int numeros[10], busqueda, intentos, resultado;

    intentos = 3;
    

    srand(time(NULL));
    
    for (int i = 0; i <= 9; i++)
    {
        numeros[i] = rand() % 20;
    }

    do 
    {
    
    printf("Dime un numero para buscar: ");
    scanf("%i", &busqueda);
    
    intentos--;

    for (int i = 0; i <= 9; i++)
        {
        
        if (busqueda == numeros[i])
        {
            printf("El numero %i esta en la posicion %i\n", busqueda, i);
            resultado = 1;
        }

        }
    for (int i = 0; i <= 9; i++)
        {
    if (resultado != 1 && intentos !=0)
        {
            printf("El numero %i no esta en el array\n", busqueda);
            break;
        }
    
        } 
    }
    while (intentos > 0 && resultado !=1);
        if (resultado !=1)
            printf("Fin. RIP. Muerto");
        else
            printf("GZ eres una crack");
    
    return 0;
}