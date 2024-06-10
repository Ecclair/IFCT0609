// factorial
#include <stdio.h>
#include <limits.h>

int main()
{
    double n,i,factorial=1;
    
    printf("Dame un numero: ");
    scanf("%lf", &n);
    
    for(i = 1 ; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("El factorial de %.0lf es %.0lf: ", n, factorial);

    return 0;
}
