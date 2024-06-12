// mostrar longitud de tu nombre

#include <stdio.h>
#include <string.h>


int main()
{
    char nombre[10];
    
    
    printf("Dime tu nombre: ");
    scanf("%s", nombre);

    printf("Tu nombre tiene %li caracteres", strlen(nombre));
    
    
    
    return 0;
}