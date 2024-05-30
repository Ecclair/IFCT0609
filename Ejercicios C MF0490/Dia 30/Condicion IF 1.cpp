// Pide 2 numeros y diga cual es mayor y menor

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Introduce el primer numero: ");
    scanf("%i", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%i", &num2);
    
    if(num1 > num2)
    {
        printf("El numero %i es mayor que %i", num1, num2);
    }
    if(num1 < num2)
    {
        printf("El numero %i es mayor que %i", num2, num1);
    }
    else
    {
        printf("Los numeros son iguales");
    }
    
    return 0;
}