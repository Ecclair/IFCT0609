#include <stdio.h>
#include <conio.h>
void bienvenida (void);
char menu (void);
float area_triangulo (float b, float h);
void main ()
{
    char opcion;
    float area, base, altura;
    bienvenida();
    opcion = menu();
    switch (opcion)
    {
        case '1': 
            puts ("Has elegido la opción 1"); break;
        case '2': 
            puts ("Has elegido la opción 2"); break;
        case '3':
            puts ("Base del triángulo: ");
            scanf (" %f", &base);
            puts ("Altura del triángulo: ");
            scanf (" %f", &altura);
        area = area_triangulo (base, altura);
            printf ("El área del triángulo es %.3f\n", area);
            break;
        default: 
            puts ("Opción Incorrecta");
    }
    puts ("Pulsa una tecla para finalizar");
    getch();
}
void bienvenida()
{
    puts ("PRÁCTICA DE FUNCIONES EN STARNET");
    puts ("pulsa una tecla para continuar"); getch();
}
char menu ()
{
   char op;
    puts ("MENÚ");
    puts ("1.-Opción 1");
    puts ("2.-Opción 2");
    puts ("3.-Área de un triángulo");
    puts ("OPCION: ");
    scanf(" %c", &op);
    return op;
}
float area_triangulo (float b, float h)
{
    float area;
    area = (b * h) / 2;
    return area;
}