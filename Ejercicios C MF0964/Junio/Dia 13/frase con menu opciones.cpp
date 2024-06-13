// Pedir una frase y menu con mayus minus y longitud
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char refran[100];
    int i, opcion;
    
    
    
    printf("Dime una frase: ");
    fgets(refran, 100, stdin);
    
    do
    {
        printf("\nMenu de opciones\n");
        printf("\n1. Convertir a mayusculas");
        printf("\n2. Convertir a minusculas");
        printf("\n3. Longitud de la frase");
        printf("\n4. Salir");
        printf("\nElige una opcion: ");
        scanf("%i", &opcion);
    
        
            switch (opcion)
            {
                case 1:
                    for (i = 0; i < 100; i++)
                    {
                        refran[i] = toupper(refran[i]);
                    }
                    puts(refran);
                    printf("\n--------------------");
                    break;
                case 2:
                    for (i = 0; i < 100; i++)
                    {
                        refran[i] = tolower(refran[i]);
                    }
                    puts(refran);
                    printf("\n--------------------");
                    break;
                case 3:
                    printf("La longitud de la frase es %li", strlen(refran));
                    printf("\n---------------------");
                    break;
                    
                default:
                    break;
            }
    }
    
    while(opcion !=4);
        printf("\nbyebye");
    
    return 0;
        
}