#include <stdio.h>

int main()
{
    float renta;
    printf("define tu renta: ");
    scanf("%f", &renta);
    
    if (renta < 10000)
    {
        printf("Tu tipo impositivo es del 5%%");
    }
    if (renta >= 10000 && renta < 20000)
    {
        printf("Tu tipo impositivo es del 15%%");
    }
    if (renta >= 20000 && renta < 35000)
    {
        printf("Tu tipo impositivo es del 20%%");
    }
    if (renta >= 35000 && renta < 60000)
    {
        printf("Tu tipo impositivo es del 30%%");
    }
    if (renta >= 60000)
    {
        printf("Tu tipo impositivo es del 45%%");
    }
    
    return 0;
}
