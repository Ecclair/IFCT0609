// Imprime el numero de asteriscos que pida el usuario

#include <stdio.h>

int main()
{
    int numero;
    char asterisco = '*';
    printf("Introduce el numero de asteriscos que quieres imprimir: ");
    scanf("%i", &numero);
    
    while(numero > 0)
    {
        printf("%c", asterisco);
        numero--;
    }
    
    return 0;
}