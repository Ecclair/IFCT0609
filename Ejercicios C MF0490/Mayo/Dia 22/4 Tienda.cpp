// Una tienda ofrece un descuento del 15% sobre el total de la compra y 
// un cliente desea saber cuanto deberá pagar finalmente por su compra.

//

#include <iostream>

int main()
{
    float totalCompra, descuento, totalPagar;
    printf("Ingrese el total de la compra: ");
    scanf_s("%f", &totalCompra);
    descuento = totalCompra * 0.15;
    totalCompra = totalCompra - descuento;
    printf("El total a pagar es: %.2f\n", totalCompra);
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
