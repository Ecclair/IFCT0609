// pide 2 ciudades y di cual es mayor
#include <stdio.h>
#include <string.h>

int main()
{
    char ciudad1[20], ciudad2[20];
    int resultado;
    
    printf("Dime la ciudad 1: ");
    scanf("%s", ciudad1);
    printf("Dime la ciudad 2: ");
    scanf("%s", ciudad2);

    resultado = strcmp(ciudad1, ciudad2);

    if (resultado < 0)
    {
        printf("La ciudad %s es mayor que %s", ciudad1, ciudad2);
    }
    if (resultado > 0)
    {
        printf("La ciudad %s es mayor que %s", ciudad2, ciudad1);
    }

}