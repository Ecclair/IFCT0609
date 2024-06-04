#include <stdio.h>

int main()
{
    float p1,pf,d;
    printf("Precio inicial ");
    scanf("%f",&p1);
    printf("Precio final ");
    scanf("%f",&pf);
    
    d=p1-pf;
    
    if (d<=0)
    
    {
        printf("\nEste producto aumento su precio un %.2f %%",((pf-p1)*100/p1));
        
    }
    
    else if(d>0)
    
    {
        printf("\nEste producto disminuyo su precio un %.2f %%",((p1-pf)*100/p1));
        
    }
    return 0;
}

