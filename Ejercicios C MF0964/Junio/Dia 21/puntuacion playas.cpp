// puntuaciones playas
#include <stdio.h>
#include <conio.h>


void puntuacion(int playa[3]);

int playa[3];
void main()
{
    int playa[3];
    puntuacion(playa);


}

void puntuacion(int playa[3])
    {
        int a,b,c;
        int i;
        for (i = 0; i < 3; i++)
        {
            puts("Dame la puntuacion de playa 1: ");
            scanf("%i",&a);
            playa[0] += a;
            puts("Dame la puntuacion de playa 2: ");
            scanf("%i", &b);
            playa[1] += b;
            puts("Dame la puntuacion de playa 3: ");
            scanf("%i", &c);
            playa[2] += c;
        }
        
        for (i = 0; i < 3; i++)
            printf("Esta es a puntuacion de playa %i: %i\n",i+1, playa[i]);
                  
        
    }