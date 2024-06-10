// notas mates, galego, programacion mais promedio, ana clara lucia.
#include <stdio.h>

int main()
{
    int notas_ana[3], notas_clara[3], notas_lucia[3];
    float media_ana, media_clara, media_lucia;
    
    printf("Introduce las notas de Ana:");
    printf("\nMatematicas: ");
    scanf("%i", &notas_ana[0]);
    printf("Galego: ");
    scanf("%i", &notas_ana[1]);
    printf("Programacion: ");
    scanf("%i", &notas_ana[2]);
    
    media_ana = (notas_ana[0] + notas_ana[1] + notas_ana[2]) / 3;
    
    printf("Introduce las notas de Clara: ");
    printf("\nMatematicas: ");
    scanf("%i", &notas_clara[0]);
    printf("Galego: ");
    scanf("%i", &notas_clara[1]);
    printf("Programacion: ");
    scanf("%i", &notas_clara[2]);
    
    media_clara = (notas_clara[0] + notas_clara[1] + notas_clara[2]) / 3;
    
    printf("Introduce las notas de Lucia: ");
    printf("\nMatematicas: ");
    scanf("%i", &notas_lucia[0]);
    printf("Galego: ");
    scanf("%i", &notas_lucia[1]);
    printf("Programacion: ");
    scanf("%i", &notas_lucia[2]);
    
    media_lucia = (notas_lucia[0] + notas_lucia[1] + notas_lucia[2]) / 3;
    
    printf("\n-------------------------\n");
    printf("Las notas de Ana son:\nMatematicas: %i\nGalego: %i\nProgramacion: %i",notas_ana[0],notas_ana[1],notas_ana[2]);
    printf("\nLa nota promedio es: %.1f", media_ana);
    
    printf("\n-------------------------\n");
    printf("Las notas de Clara son:\nMatematicas: %i\nGalego: %i\nProgramacion: %i",notas_clara[0],notas_clara[1],notas_clara[2]);
    printf("\nLa nota promedio es: %.1f", media_clara);
    
    printf("\n-------------------------\n");
    printf("Las notas de Lucia son:\nMatematicas: %i\nGalego: %i\nProgramacion: %i",notas_lucia[0],notas_lucia[1],notas_lucia[2]);
    printf("\nLa nota promedio es: %.1f", media_lucia);
    
    
    return 0;
}

