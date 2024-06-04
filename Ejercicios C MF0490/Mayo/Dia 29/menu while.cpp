/* Modificar o exercicio de ordenar tres números enteiros da páxina 25 poñendo este menú:
	1. Pedir 3 números.
	2. Mostralos en orde ascendente.
	3. Mostralos en orde descendente.
	4. Sair.
Facelo con do while. */

#include <stdio.h>

int main()
{
int n1,n2,n3, aux, opcion;

do {
    
printf("Ordenar 3 numero enteiros");
printf("\n1. pedir 3 numeros");
printf("\n2. mostrar en orden ascendente");
printf("\n3. mostrar en orden descendente");
printf("\n4. sair\n");
scanf("%i",&opcion);

if (opcion==1)

{
printf("\nDime un numero: ");
scanf("\n%i", &n1);
printf("\nDime otro numero: ");
scanf("\n%i", &n2);
printf("\nDime otro numero: ");
scanf("\n%i", &n3);

}
else if (opcion==2)
    {
          if(n1>n2)
          {
            aux=n1;
            n1=n2;
            n2=aux;   
          }
          if(n1>n3)
          {
            aux=n1;
            n1=n3;
            n3=aux;   
          }
          if(n2>n3)
          {
              aux=n2;
              n2=n3;
              n3=aux;
          }
 printf("\nNúmeros de forma ascendente %i, %i, %i\n", n1, n2, n3);

          }  
else if (opcion==3)
      {
          if(n1<n2)
          {
            aux=n1;
            n1=n2;
            n2=aux;   
          }
          if(n1<n3)
          {
            aux=n1;
            n1=n3;
            n3=aux;   
          }
          if(n2<n3)
          {
              aux=n2;
              n2=n3;
              n3=aux;
          }
printf("\nNúmeros de forma descendente %i, %i, %i\n", n1, n2, n3);
      } 
  }

while (opcion!=4); 

return 0;

 }