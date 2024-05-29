#include <stdio.h>


int main()
{
    int anyos,anyo,actual;
    printf("Bienvenido usuario, Dime cuantos años tienes: ");
    scanf("%i",&anyos);
    printf("Bien, ahora dime en que año estamos: ");
    scanf("%i",&actual);
    printf("Muy bien usuario, ahora dime un año: ");
    scanf("%i",&anyo);
    
    
    

    printf("'Ahora se que tienes ( %i ) años, gracias.\n y en el año %i tenrdás %i.'", anyos,anyo, (anyo - actual) + anyos);
    

    return 0;
}

