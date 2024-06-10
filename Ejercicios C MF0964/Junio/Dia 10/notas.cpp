#include <stdio.h>

int main()
{
    float nota;
    
    printf("Programa de notas\n");
    printf("Introduzca una nota: ");
    scanf("%f",&nota);
    
    
    if(nota < 5)
        printf("\nInsuficiente");
    if(nota >=5 && nota <6)
        printf("\nSuficiente");
    if(nota >=6 && nota <7)
        printf("\nBien");
    if(nota >=7 && nota <8.5)
        printf("\nNotable");
    if(nota >=8.5 && nota <10)
        printf("\nSobresaliente");
 
 return 0;
}

