// Velocidad media.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    float km, tiempo, media;
    printf("Introduce la distancia en kilometros: ");
    scanf_s("%f", &km);
    printf("Introduce el tiempo en horas ej: 2,5h: ");
    scanf_s("%f", &tiempo);
    media = (km / tiempo);
    printf("La velocidad media efloatn Km/h es: %.2f\nLa velocidad media en m/s es: %.2f\n", media, media / 0.27);
    return 0;
}
