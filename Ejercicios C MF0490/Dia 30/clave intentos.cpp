// clave 222
// intentos 5
#include <stdio.h>

int main()
{
    
    int clave = 222, numero, intentos = 5;
    
    do 
    {
    printf("Adivina el numero secreto:");
    printf("\nNunmero: ");
    scanf("%i",&numero);
    
    intentos -= 1;
    
        if((numero != 222) && (intentos != 0))
        {
            printf("\nVuelve a intentar: ");
        }
        
        if(numero == 222)
        {
            printf("Correcto!");
        }
        if(intentos==0)
        {
            printf("game over");
        }
    }
    
    while(numero != 222 && intentos != 0);
    
return 0;

}