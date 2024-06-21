// funciones return void

#include <stdio.h>
#include <conio.h>
#include <math.h>

void sumar(void);
void restar(void);
void multiplicar(void);

void main()
{
    sumar();
    restar();
    multiplicar();
}

void sumar(void)
{
    int a, b;
    puts("Introduce el primer número: ");
    scanf(" %d", &a);
    puts("Introduce el segundo número: ");
    scanf(" %d", &b);
    printf("La suma de %d y %d es %d\n", a, b, a + b);
}

void restar(void)
{
    int a, b;
    puts("Introduce el primer número: ");
    scanf(" %d", &a);
    puts("Introduce el segundo número: ");
    scanf(" %d", &b);
    printf("La resta de %d y %d es %d\n", a, b, a - b);
}

void multiplicar(void)
{
    int a, b;
    puts("Introduce el primer número: ");
    scanf(" %d", &a);
    puts("Introduce el segundo número: ");
    scanf(" %d", &b);
    printf("La multiplicación de %d y %d es %d\n", a, b, a * b);
}




