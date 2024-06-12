// mostrar nombre por pantalla 

#include <stdio.h>

int main()
{
    char nombre[10];
    
    printf("Dime tu nombre: ");
    scanf("%s", nombre);
    
    printf("%s", nombre);
    
    return 0;
}