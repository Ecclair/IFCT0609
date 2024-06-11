#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[10];
   
    printf("Dime una palabra (max 10 caracteres): ");
    scanf("%s", palabra);
   
    strupr(palabra);
   
    for (int i = 0; i < 10; i++)
    {
        printf("%c", palabra[i]);
    }
   
    return 0;
}
