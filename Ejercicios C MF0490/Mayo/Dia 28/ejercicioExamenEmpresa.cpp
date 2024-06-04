#include <stdio.h>

int main()
{

    char respuesta1, respuesta2, respuesta3, respuesta4, respuesta5;
    int puntos = 0;
    
    printf("1. El dueño de la empresa donde vamos a hacer las prácticas no quiere sacarse la ISO de seguridad, pero quiere cumplir con las normativas obligatorias:\n");
    printf("a. Puede hacerlo sin sacar la ISO.\n");
    printf("b. No puede, es obligatoria la ISO.\n");
    printf("c. Depende del tamaño de la empresa es obligatorio o no.\n");
    scanf(" %c", &respuesta1);
    
    if (respuesta1 == 'a')
    {
        printf("Respuesta correcta\n");
        puntos +=2;
    }
    else
    {
        printf("Respuesta incorrecta\n");
    }
    
    printf("2. Si están interesados en la ISO de seguridad.\n");
    printf("a. Tienen que ver la ISO 27000.\n");
    printf("b. Tienen que ver la ISO 27001.\n");
    printf("c. Tienen que ver la ISO 27002.\n");
    scanf(" %c", &respuesta2);
    
    if (respuesta2 == 'b')
    {
        printf("Respuesta correcta\n");
        puntos +=2;
    }
    else
    {
        printf("Respuesta incorrecta\n");
    }
    
    printf("3. La ley orgánica de protección de datos…\n");
    printf("a. La normativa que estudiamos es para España.\n");
    printf("b. La normativa que estudiamos es para Europa.\n");
    printf("c. La normativa que estudiamos en internacional.\n");
    scanf(" %c", &respuesta3);
    
    if (respuesta3 == 'c')
    {
        printf("Respuesta correcta\n");
        puntos +=2;
    }
    else
    {
        printf("Respuesta incorrecta\n");
    }
    printf("4. El origen racial de una persona según su naturaleza y la LOPD…\n");
    printf("a. Es un dato de nivel básico.\n");
    printf("b. Es un dato de nivel medio.\n");
    printf("c. Es un dato de nivel alto.\n");
    scanf(" %c", &respuesta4);

    if (respuesta4 == 'c')
    {
       printf("Respuesta correcta\n");
        puntos +=2;
    }
    else
    {
    printf("Respuesta incorrecta\n");
    }

    printf("5. Quién sanciona por no cumplir la LOPD?\n");
    printf("a. La guardia civil.\n");
    printf("b. La policía.\n");
    printf("c. La agencia española de protección de datos.\n");
    scanf(" %c", &respuesta5);

    if (respuesta5 == 'c')
    {
       printf("Respuesta correcta\n");
        puntos +=2;
    }
    else
    {
    printf("Respuesta incorrecta\n");
    }
    printf("Enhorabuena has obtenido %i puntos", puntos);


    return 0;
}