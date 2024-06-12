// pedir nombre y apellidos concatenarlos y mostrarlos por pantalla

#include <stdio.h>
#include <string.h>


int main()
{
    char nombre[10], apellido1[20], apellido2[20], nombreCompleto[50];

    printf("Dime tu nombre: ");
    scanf("%s", nombre);
    printf("Dime tu primer apellido: ");
    scanf("%s", apellido1);
    printf("Dime tu segundo apellido: ");
    scanf("%s", apellido2);

    strcpy(nombreCompleto, nombre);
    strcat(nombreCompleto, " ");
    strcat(nombreCompleto, apellido1);
    strcat(nombreCompleto, " ");
    strcat(nombreCompleto, apellido2);

    printf("Tu nombre completo es: %s", nombreCompleto);


    
    
    
    return 0;S
}