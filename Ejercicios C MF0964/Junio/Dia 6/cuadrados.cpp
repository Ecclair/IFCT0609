// numero elevado al cuadrado dato entero pregunte si desea seguir o no
#include <stdio.h>

int main()
{
int n, suma; 
char continuar;
do
{
printf("Dime un numero: ");
scanf("%i", &n);
printf("El cuadrado de %i es %i", n,n * n);
    
suma += n * n;
    
printf("\nDesea continuar? (s/n): ");
scanf(" %c", &continuar);
    
}
    
while(continuar !='n');
    
printf("La suma de tus cuadrados es %i", suma);
        
return 0;
    
}