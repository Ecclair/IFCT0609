// Ejercicio casa rural con Switch o if
// 3 plantas 2 habitaciones por planta,
#include <stdio.h>

// Menu principal

int main() {

    int menu, piso, habitacion, familiar,doble,single,volver;
    
    do {
        printf("\n1 Historia de la casa rural");
        printf("\n2 Alrededores de la casa");
        printf("\n3 Habitaciones");
        printf("\n4 Salir");
        printf("\nElige una opcion: ");
        scanf("%i", &menu);
        
        switch (menu)
        {
        case 1:
            printf("Historia de la casa rural\n");
            printf("Construida en el anyo 1964 es viejilla pero resultona.\n");
            break;
        case 2:
            printf("Alrededores de la casa\n");
            printf("La casa esta rodeada de un bosque de pinos y encinas.\n");
            break;
        case 3:
            printf("Habitaciones\n");
            printf("La casa tiene 3 plantas con 2 habitaciones por planta.\n");
            printf("Escoge un piso (1 2 3) : ");
            printf("\nPISO 1");
            printf("\nPISO 2");
            printf("\nPISO 3");
            printf("\nPISO: ");
            scanf("%i", &piso);
            if(piso ==1 || piso == 2 || piso == 3)
            {
                do {
                    printf("\nEscoge una habitacion: ");
                    printf("\n1 Habitacion Familiar");
                    printf("\n2 Habitacion Doble");
                    printf("\n3 Habitacion Single");
                    printf("\n4 Volver.");
                    
                    printf("\nHabitacion: ");
                    scanf("%i", &habitacion);
                    if(habitacion == 1)
                    {
                        printf("Habitacion Familiar\n");
                        printf("\nHabitacion de 45 metros cuadrados con cama de matrimonio y dos camas individuales.");
                        printf("\nTV, Wi-Fi, Hidromasaje, 3 armarios individuales, Nevera y servicio de lavanderia.");
                    }
                    else if(habitacion == 2)
                    {
                        printf("Habitacion Doble\n");
                        printf("\nHabitacion de 30 metros cuadrados con cama de matrimonio.");
                        printf("\nTV, Wi-Fi, Bañera,ducha, 2 armarios individuales y Nevera.");
                    }
                    else if(habitacion == 3)
                    {
                        printf("Habitacion Single\n");
                        printf("Habitacion de 30 metros cuadrados con cama individual.\n");
                        printf("\nTV, Wi-Fi, Bañera,ducha, 2 armarios individuales, Nevera.");
                    }
                    
                    else
                    {
                        printf("Opcion no valida\n");
                    }
                }
                while(habitacion !=4);
            }          
        default:
            break;
        }
    }
    while(menu !=4);
    return 0;
}


