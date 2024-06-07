// crear un programa que dibuje con asteriscos sumados en cada linea
#include <stdio.h>

int main()
{
    int esp, ast, n = 20;

    for(esp = n; esp >= 1; esp--)
    {
        for(ast = 5; ast <= n; ast++)
        {
            if(ast <= esp)
                printf(" ");
            
            if(ast >= esp)
               printf("*");
            
        }
        printf("\n");
    }

    return 0;
}