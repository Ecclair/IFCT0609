#include <stdio.h>

int main()
{
    int n;
    printf("Dime un año: ");
    scanf("%i", &n);
    
    if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
    {
        printf("año bisiesto");
    }
    else
    {
        printf("año no bisiesto");
    }
    return 0;
}
