// funciones return void

#include <stdio.h>
#include <conio.h>
#include <math.h>

float sumar(float a, float b);
float restar(void);
float multiplicar(void);

void main()
{
    float suma, resta, multiplicacion, n1, n2;
    int menu;

    puts("1. Sumar");
    puts("2. Restar");
    puts("3. Multiplicar");
    puts("Elige una opción: ");
    scanf(" %d", &menu);
    

    switch (menu)
    {
        case 1:
            puts("Introduce el primer número: ");
            scanf(" %f", &n1);
            puts("Introduce el segundo número: ");
            scanf(" %f", &n2);
            suma = sumar(n1, n2);
            printf("La suma de %.2f y %.2f es %.2f\n", n1, n2, suma);
            break;
        case 2:
            puts("Introduce el primer número: ");
            scanf(" %f", &n1);
            puts("Introduce el segundo número: ");
            scanf(" %f", &n2);
            resta = restar(n1, n2);
            printf("La resta de %.2f y %.2f es %.2f\n", n1, n2, resta);
            break;
        case 3:
            puts("Introduce el primer número: ");
            scanf(" %f", &n1);
            puts("Introduce el segundo número: ");
            scanf(" %f", &n2);
            multiplicacion = multiplicar(n1, n2);
            printf("La multiplicación de %.2f y %.2f es %.2f\n", n1, n2, multiplicacion);
            break;
        default:
            puts("Opción Incorrecta");
    }
}

float sumar(float a, float b)
{
    float suma;
    suma = a + b;
    return suma;   
}

float restar(float a, float b)
{
    float resta;
    resta = a - b;
    return resta;
}

float multiplicar(float a, float b)
{
    float multiplicacion;
    multiplicacion = a * b;
    return multiplicacion;
}
