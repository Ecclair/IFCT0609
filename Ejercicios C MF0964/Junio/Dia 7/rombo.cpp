#include <stdio.h>

int main()
{
    int esp, ast, n = 10;
    
    for(esp = n; esp >= 1; esp--)
    {
        for(ast = 1; ast <= n; ast++)
        {
            if(ast < esp)
                printf(" ");
            else
                printf("*");
        }
        for(ast = 2; ast <= n - esp + 1; ast++)
        {
            printf("*");
        }
        printf("\n");
    }

for(esp = 2; esp <= n; esp++)
    {
        for(ast = 1; ast <= n; ast++)
        {
            if(ast < esp)
                printf(" ");
            else
                printf("*");
        }
        for(ast = 2; ast <= n - esp + 1; ast++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}