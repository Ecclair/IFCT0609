#include <stdio.h>

void intercambio_variables(int a, int b);

int main()
{
    int variable1 = 5;
    int variable2 = 10;

    printf("Las variables antes del intercambio son %i, %i\n", variable1, variable2);

    intercambio_variables(variable1, variable2);

    printf("Las variables después del intercambio son %i, %i\n", variable1, variable2);

    return 0;
}

void intercambio_variables(int a, int b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
    printf("Las variables intercambiadas en la función son %i, %i\n", a, b);
}