// mostrar nombre por pantalla y ciudad

#include <stdio.h>

int main()
{
    char nombre[10], ciudad[20];
    
    printf("Dime tu nombre: ");
    scanf("%s", nombre);
    printf("Dime tu ciudad: ");
    scanf("%s", ciudad);

    
    printf("Hola %s, Tu ciudad es %s", nombre, ciudad);
    
    return 0;
}