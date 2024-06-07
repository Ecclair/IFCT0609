// mostrar numero de pacientes del 1 al 255 de forma aleatoria

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n;
    
    srand(time(NULL));
    n = rand()%255;

    printf("El numero de pacientes en la cola es %i\n", n);
    
    for(i = 0; i < 255; i++)
    {
        n = rand()%255;
        printf("El numero de pacientes en la cola es %i\n", n);
    }
    
    return 0;
}

