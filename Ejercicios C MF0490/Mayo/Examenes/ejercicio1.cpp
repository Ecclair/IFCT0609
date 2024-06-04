// Menu de vehiculos con menu de 2 modelos de coches de cada marca

#include <stdio.h>

int main()
{
    int opcion, modelo;
    
    printf("PROGRAMA DE VEHICULOS");
    printf("\nELIXE A MARCA QUE QUERIAS MIRAR");
    printf("\n1 Peugeot");
    printf("\n2 Seat");
    printf("\n3 Citroën");
    printf("\n4 Toyota");
    printf("\n5 Hyundai");
    printf("\nOpcion: ");
    scanf("%i",&opcion);

    switch(opcion) {
        case 1: {
            printf("Peugeot");
            printf("\nElija un modelo:");
            printf("\nModelo 1 o 2: ");
            printf("\n1 308 Active");
            printf("\n2 2008 Active");
            scanf("%i",&modelo);
                if (modelo == 1) 
                {
                    printf("Peugeot 308 Active");
                    printf("\nCompacto segmento C, motor 1.2 PureTech 130Cv");
                }
                if (modelo == 2)
                {
                    printf("Peugeot 2008 Active");
                    printf("\nSUV segmento C motor 1.2 PureTech 100CV");
                }
            
            break;
        }
        case 2: {
            printf("Seat");
            printf("\nElija un modelo:");
            printf("\n1 Ibiza");
            printf("\n2 León");
            printf("\nModelo 1 o 2: ");
            scanf("%i",&modelo);
                if (modelo == 1) 
                {
                    printf("Seat Ibiza Reference");
                    printf("\nCompacto segmento B Motor 1.0 EcoTSI 95CV");
                }
                if (modelo == 2)
                {
                    printf("Seat León Reference");
                    printf("\nSegmento C, Motor 1.0 EcoTSI 110CV");
                }
                
            break;
        }
        case 3: {
            printf("Citroën");
            printf("\nElija un modelo:");
            printf("\n1 C3");
            printf("\n2 Berlingo");
            printf("\nModelo 1 o 2: ");
            scanf("%i",&modelo);
                if (modelo == 1) 
                {
                    printf("Citroën C3");
                    printf("\nCompatco segmento B, motor PureTech 110CV");
                }
                if (modelo == 2)
                {
                    printf("Citroën Berlingo");
                    printf("\nMonovolumen Compacto, Motor BlueHDi 100CV");
                }
            break;
        }
        case 4: {
            printf("Toyota Motor Corporation");
            printf("Elijia un modelo:");
            printf("\n1 Aygo");
            printf("\n2 Corolla");
            printf("\nModelo 1 o 2: ");
            scanf("%i",&modelo);
                if (modelo == 1) 
                {
                    printf("Toyota Aygo");
                    printf("\nCompacto segmento A, Motor 1.0 VVT-i 72CV");
                }
                if (modelo == 2)
                {
                    printf("Toyota Corolla");
                    printf("\nCompacto segmento C, Motor 1.8 Hybrid 122CV");
                }
            break;
        }
        case 5: {
            printf("Hyundai Motor Company");
            printf("\nElija un modelo:");
            printf("\n1 i20");
            printf("\n2 Tucson");
            printf("\nModelo 1 o 2: ");
            scanf("%i",&modelo);
                if (modelo == 1) 
                {
                    printf("Hyundai i20");
                    printf("\nCompacto segmento B, Motor 1.0 T-GDi 100CV");
                }
                if (modelo == 2)
                {
                    printf("Hyundai Tucson");
                    printf("\nSUV segmento C, Motor 1.6 CRDi 115CV");
                }
            break;
        }
        default: {
            printf("Opción no válida.");
        }
    }

return 0;
}