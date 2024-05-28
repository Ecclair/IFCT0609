#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    float metro, pie, pulgada;
    printf("Introduzca numero de metros: ");
    scanf("%f", &metro);

    pie = metro * 3.2;
    pulgada = metro * 39.3;

    printf("El valor en pies es %.1f \nEl valor en pulgadas es %.1f", pie, pulgada);
    return 0;

}
