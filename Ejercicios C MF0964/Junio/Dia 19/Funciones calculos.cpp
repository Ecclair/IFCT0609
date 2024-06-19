// funciones de calculos

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.1415926


int menu (void);
float area_triangulo (float b, float a);
float perimetro_triangulo (float b, float l);
float area_cuadrado (float l);
float perimetro_cuadrado (float l);
float area_circunferencia (float r);
float perimetro_circunferencia (float r);


void main()
{
    int opcion;
    float ladoc, baset, ladot, alturat, radioc, area, perimetro;
    opcion = menu();
    switch (opcion)
    {
        case 1:
            puts ("Base del triángulo: ");
            scanf (" %f", &baset);
            puts ("Altura del triángulo: ");
            scanf (" %f", &alturat);
            area = area_triangulo (baset, alturat);
            printf ("El área del triángulo es %.3f\n", area);
            break;
        case 2:
            puts ("Base del triángulo: ");
            scanf (" %f", &baset);
            puts ("Lado del triángulo: ");
            scanf (" %f", &ladot);
            perimetro = perimetro_triangulo(baset,ladot);
            printf("El perimetro del triangulo es: %.3f\n", perimetro);
            break;
        case 3:
            puts("Area del Cuadrado:");
            scanf(" %f",ladoc);
            area = area_cuadrado(ladoc);
            printf("El area del cuadrado es: %.3f\n", area);
            break;
        case 4:
            puts("Perimetro del Cuadrado:");
            scanf(" %f",ladoc);
            area = perimetro_cuadrado(ladoc);
            printf("El area del cuadrado es: %.3f\n", area);
            break;

        case 5:
            puts("Area de la circunferencia:");
            scanf(" %f",&radioc);
            area = area_circunferencia(radioc);
            printf("es: %.3f\n", area);
            break;

        case 6:
            puts("Perimetro de la circumferencia:");
            scanf(" %f",radioc);
            perimetro = perimetro_circunferencia(radioc);
            printf("es: %.3f\n", perimetro);
            break;
        default:

    
    }

    
}

int menu ()
{
    int op;
    printf("Menu de calculos:");
    printf("\n1. Area de Triangulo.");
    printf("\n2. Perimetro Triangulo.");
    printf("\n3. Area Cuadrado.");
    printf("\n4. Perimetro Cuadrado.");
    printf("\n5. Area Circunferencia.");
    printf("\n6. Perimetro Circunferencia.");
    scanf(" %i", &op);
    return op;
}

float area_triangulo (float b, float a)
{
    float area;
    area = (b * a) / 2;
    return area;
}

float perimetro_triangulo(float b, float l)
{
    float perimetro;
    perimetro = b + l + l;
    return perimetro;
}

float area_cuadrado(float l)
{
    float area;
    area = l * l;
    return area;
}

float perimetro_cuadrado(float l)
{
    float perimetro;
    perimetro = l * 4;
    return perimetro;
}

float area_circunferencia(float r)
{
    float area;
    area = PI * (r*r);
    return area;
}

float perimetro_circunferencia(float r)
{
    float perimetro;
    perimetro = (r*2) * PI;
    return perimetro;
}