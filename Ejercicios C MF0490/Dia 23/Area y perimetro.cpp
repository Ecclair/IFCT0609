#include <stdio.h>
#define PI 3.1415926
// area y perimetro de cuadrado triangulo y circumferencia
int main()
{
    float ladoc, baset, ladot, alturat, radioc;
    printf("define el lado del cuadrado: ");
    scanf("%f", &ladoc);
    printf("define base triangulo: ");
    scanf("%f", &baset);
    printf("define el lado del triangulo: ");
    scanf("%f", &ladot);
    printf("define altura del triangulo: ");
    scanf("%f", &alturat);
    printf("define el radio de la circumferencia: ");
    scanf("%f", &radioc);
    
    printf("\nEl area del cuadrado es: %.2f ", ladoc*ladoc);
    printf("\nEl perimetro del cuadrado es: %.2f ", ladoc*4);
    printf("\nEl area del triangulo es: %.2f ", (baset*alturat)/2);
    printf("\nEl perimetro del triangulo es: %.2f ", baset+ladot+ladot);
    printf("\nEl area de circunferencia es: %.2f ", PI*(radioc*radioc));
    printf("\nEl perimetro de la circunferencia: %.2f ", (radioc*2)*PI);
    
    return 0;
}