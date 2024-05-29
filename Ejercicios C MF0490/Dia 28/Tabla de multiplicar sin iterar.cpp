#include <stdio.h>

int main()
{
    int n;
    printf("Dime de que numero quieres la tabla de multiplicar: \nNumero:");
    scanf("%i",&n);
    
    printf("La tabla de multiplicar del %i es:\n", n);
    printf("%i por 1 = %i\n", n, n * 1);
    printf("%i por 2 = %i\n", n, n * 2);
    printf("%i por 3 = %i\n", n, n * 3);
    printf("%i por 4 = %i\n", n, n * 4);
    printf("%i por 5 = %i\n", n, n * 5);
    printf("%i por 6 = %i\n", n, n * 6);
    printf("%i por 7 = %i\n", n, n * 7);
    printf("%i por 8 = %i\n", n, n * 8);
    printf("%i por 9 = %i\n", n, n * 9);
    printf("%i por 10 = %i\n", n, n * 10);

    return 0;
}