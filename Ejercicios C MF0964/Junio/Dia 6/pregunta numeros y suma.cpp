// introducir numeros, sumarlos, preguntar si quiere continuar o no, mostrar todos y la suma. con do while

#include <stdio.h>

int main()

{
    int n, suma; 
    char continuar;
    do
    {
        printf("Dime un numero: ");
        scanf("%i", &n);
        printf("La suma de %i es %i", n,n + n);
        printf("\nDesea continuar? (s/n): ");
        scanf(" %c", &continuar);
        suma += n + n;

    }
    while(continuar !='n');

    printf("La suma de tus numeros es %i", suma);

    return 0;

}