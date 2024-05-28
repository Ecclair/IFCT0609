#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main()
{
    int opcion;
    float lado, base, altura, radio;
    
    printf("Elige una opcion:\n1. Area de cuadrado\n2. Perimetro de cuadrado\n3. Area de triangulo\n4. Perimetro de triangulo\n5. Area de rectangulo\n6. Perimetro de rectangulo\n7. Area de circulo\n8. Perimetro de circulo\n");
    scanf("%i", &opcion);
    
    switch (opcion)
    {
        case 1:
            printf("Introduce el lado del cuadrado: ");
            scanf("%f", &lado);
            printf("El area del cuadrado es: %.2f", lado * lado);
            break;
        case 2:
            printf("Introduce el lado del cuadrado: ");
            scanf("%f", &lado);
            printf("El perimetro del cuadrado es: %.2f", 4 * lado);
            break;
        case 3:
            printf("Introduce la base y la altura del triangulo: ");
            scanf("%f %f", &base, &altura);
            printf("El area del triangulo es: %.2f", (base * altura) / 2);
            break;
        case 4:
            printf("Introduce los tres lados del triangulo: ");
            float lado1, lado2, lado3;
            scanf("%f %f %f", &lado1, &lado2, &lado3);
            printf("El perimetro del triangulo es: %.2f", lado1 + lado2 + lado3);
            break;
        case 5:
            printf("Introduce la base y la altura del rectangulo: ");
            scanf("%f %f", &base, &altura);
            printf("El area del rectangulo es: %.2f", base * altura);
            break;
        case 6:
            printf("Introduce la base y la altura del rectangulo: ");
            scanf("%f %f", &base, &altura);
            printf("El perimetro del rectangulo es: %.2f", 2 * (base + altura));
            break;
        case 7:
            printf("Introduce el radio del circulo: ");
            scanf("%f", &radio);
            printf("El area del circulo es: %.2f", PI * pow(radio, 2));
            break;
        case 8:
            printf("Introduce el radio del circulo: ");
            scanf("%f", &radio);
            printf("El perimetro del circulo es: %.2f", 2 * PI * radio);
            break;
        default:
            printf("Opcion no valida");
    }
    
    return 0;
}