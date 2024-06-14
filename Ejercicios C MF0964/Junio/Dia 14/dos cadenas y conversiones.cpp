// pedir 2 cadenas y hacer varias conversiones

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <string>

int main ()
{

    char cadena1[100], cadena2[100];
    char vocales[10] = {'a', 'e', 'i', 'o', 'u' , 'A', 'E', 'I', 'O', 'U'};
    int i;

    printf("Dime una frase: ");
    fgets(cadena1, 100, stdin);
    printf("Dime otra frase: ");
    fgets(cadena2, 100, stdin);

    strlen(cadena1);
    strlen(cadena2);

        if (strlen(cadena1) > strlen(cadena2))
        {
            printf("La cadena mas larga es: ");
            puts(cadena1);
        }
        else if (strlen(cadena1) < strlen(cadena2))
        {
            printf("La cadena mas larga es: ");
            puts(cadena2);
        }
        else 
        {
            printf("Las cadenas son iguales");
        }


    for (int i = 0; cadena1[i] != '\0'; i++)
    {
        if (cadena1[i] == 'a' || cadena1[i] == 'e' || cadena1[i] == 'i' || cadena1[i] == 'o' || cadena1[i] == 'u')
        {
            cadena1[i] = toupper(cadena1[i]);
        }

        
    }

    puts(cadena1);
    

    return 0;

}