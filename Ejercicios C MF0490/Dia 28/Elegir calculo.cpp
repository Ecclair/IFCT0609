#include <stdio.h>

int main()
{
    int opcion;
    float numero1,numero2;
    
    printf("Elige una opcion: \n");
    printf("1 Sumar: \n");
    printf("2 Restar: \n");
    printf("3 Multiplicar: \n");
    printf("4 Dividir: \n");
    scanf("%i",&opcion);
    
    switch(opcion)
    {
        case 1:
            printf("Introduce el primer numero: ");
            scanf("%f",&numero1);
            printf("Introduce segundo numero: ");
            scanf("%f",&numero2);
            printf("La suma de tus numeros %.0f y %.0f es: %.0f",numero1,numero2,numero1+numero2);
            break;
        case 2:
            printf("Introduce el primer numero: ");
            scanf("%f",&numero1);
            printf("Introduce segundo numero: ");
            scanf("%f",&numero2);
            printf("La resta de tus numeros %.0f y %.0f es: %.0f",numero1,numero2,numero1-numero2);
            break;
        case 3:
            printf("Introduce el primer numero: ");
            scanf("%f",&numero1);
            printf("Introduce segundo numero: ");
            scanf("%f",&numero2);
            printf("La multiplicaion de tus numeros %.0f y %.0f es: %.0f",numero1,numero2,numero1*numero2);
            break;
        case 4:
            printf("Introduce el primer numero: ");
            scanf("%f",&numero1);
            printf("Introduce segundo numero: ");
            scanf("%f",&numero2);
            printf("La division de tus numeros %.0f y %.0f es: %.1f",numero1,numero2,numero1/numero2);
            break;
        default:
            printf("Opcion no valida");
    }
    return 0;
}

