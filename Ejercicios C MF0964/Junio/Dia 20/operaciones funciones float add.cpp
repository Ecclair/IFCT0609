// funciones return void

#include <stdio.h>
#include <conio.h>
#include <math.h>

float sumar(void);
float restar(void);
float multiplicar(void);

void main()
{
    float suma, resta, multiplicacion;
    suma = sumar();
    resta = restar();
    multiplicacion = multiplicar();
}

float sumar(void)
{
    int a, b;
    puts("Introduce el primer número: ");
    scanf(" %d", &a);
    puts("Introduce el segundo número: ");
    scanf(" %d", &b);
    printf("La suma de %d y %d es %d\n", a, b, a + b);
}

float restar(void)
{
    int a, b;
    puts("Introduce el primer número: ");
    scanf(" %d", &a);
    puts("Introduce el segundo número: ");
    scanf(" %d", &b);
    printf("La resta de %d y %d es %d\n", a, b, a - b);
}

float multiplicar(void)
{
    int a, b;
    puts("Introduce el primer número: ");
    scanf(" %d", &a);
    puts("Introduce el segundo número: ");
    scanf(" %d", &b);
    printf("La multiplicación de %d y %d es %d\n", a, b, a * b);
}

