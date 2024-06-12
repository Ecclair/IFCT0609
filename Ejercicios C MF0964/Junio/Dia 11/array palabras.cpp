#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char palabra[10];
   
    printf("Dime una palabra (max 10 caracteres): ");
    scanf("%s", palabra);
   
    
   
    for (int i = 0; i < 10; i++)
    {
        printf("%c", toupper(palabra[i]));
    }
   
    return 0;
}
