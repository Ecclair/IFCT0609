// escribir un refran y pasarlo a mayusculas


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>



int main()
{
    char refran[100];
    int i;
    
    printf("Dime un refran: ");
    fgets(refran, 100, stdin);
    
    for (i = 0; i < 100; i++)
    {
        refran[i] = toupper(refran[i]);
    }
    
    printf("%s", refran);
    
    return 0;
}