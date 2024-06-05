// Sumar los 1000 primeros números naturales

#include <stdio.h>

int main()
{
    int n, suma = 0;
    for (n = 1; n <= 1000; n++)
    {
        suma += n;
    }
    printf("La suma de los 1000 primeros numeros naturales es: %i\n", suma);
    return 0;
}