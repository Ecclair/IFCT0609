#include <stdio.h>

int main()
{
    int opcion;
    printf("Elige una opcion: ");
    scanf("%i", &opcion);
    
    switch (opcion)
    {
        case 1:
            printf("Has elegido la opcion 1");
            break;
        case 2:
            printf("Has elegido la opcion 2");
            break;
        case 3:
            printf("Has elegido la opcion 3");
            break;
        case 4:
            printf("Has elegido la opcion 4");
            break;
        default:
            printf("Opcion no valida");
    }
    
    return 0;
}
