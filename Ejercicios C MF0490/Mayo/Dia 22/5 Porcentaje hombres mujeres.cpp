// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	int mujeres, hombres, total;
	float porcentajeH, porcentajeM;
   printf("Ingrese la cantidad de mujeres: ");
   scanf_s("%i", &mujeres);
   printf("Ingrese la cantidad de hombres: ");
   scanf_s("%i", &hombres);
   total = mujeres + hombres;
   porcentajeH = (hombres * 100) / total;
   porcentajeM = (mujeres * 100) / total;

   printf("El total de personas es: %i\n", total);
   printf("El porcentaje de hombres es: %.2f\n", porcentajeH);
   printf("El porcentaje de mujeres es: %.2f\n", porcentajeM);
   return 0;
   

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
