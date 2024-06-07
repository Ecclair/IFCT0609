#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, numero;
    
    srand(time(NULL));
    
    numero = rand()%100;
    
    do
    {
        printf("Introduce un numero: ");
        scanf("%i", &n);
        
        if(n > numero)
            printf("El numero correcto es menor\n");
        if(n < numero)
            printf("El numero correcto es mayor\n");
        
    }
    while(n != numero);
        printf("El numero es correcto");
    
    return 0;
    
}