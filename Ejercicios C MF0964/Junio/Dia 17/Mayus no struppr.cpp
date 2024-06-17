// funcion pasar a mayusculas

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
        if (c >= 'a' && c <= 'z')
        {
            c = c - 32;
            frase[i] = c;
        }
        i++;

    } 
    while (c != '\0');

    puts(frase);
    

    return 0;
}

    