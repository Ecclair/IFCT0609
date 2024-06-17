// elimina espacios en blanco de una frase

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char frase[100], c;
    int i =0;

    printf("Dime una frase: ");
    fgets(frase, 100, stdin);

    do
    {
        c = frase[i];
        if (c == ' ')
        {
            for (int j = i; j < strlen(frase); j++)
            {
                frase[j] = frase[j+1];
            }
        }
        i++;

    } 
    while (c != '\0');

    puts(frase);
    

    return 0;
}