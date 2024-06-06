// pedir un numero y declarar si es menor o mayor del resultado
#include <stdio.h>

int main()
{
    int n, numero=37;
    
    do
    {
        printf("Introduce un numero: ");
        scanf("%i", &n);
        
        if(n > numero)
        {
            printf("El numero correcto es menor\n");
        }
        if(n < numero)
        {
            printf("El numero correcto es mayor\n");
        }
    }
    while(n != numero);
        printf("El numero es correcto");
    
    return 0;
    
}
