// Comisiones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
  float sueldobase, comision, totalventas, sueldototal;
  printf("Ingrese el sueldo base del vendedor: ");
  scanf_s("%f", &sueldobase);
  printf("Ingrese el total de ventas: ");
  scanf_s("%f", &totalventas);
  comision = totalventas * 0.10;
  sueldototal = sueldobase + comision;

  printf("El sueldo base del vendedor es: %.2f\n", sueldobase);
  printf("La comision del vendedor es: %.2f\n", comision);
  printf("El sueldo total del vendedor es: %.2f", sueldototal);
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
