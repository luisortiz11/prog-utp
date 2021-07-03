/*Nombre del Programa:MenuOperacionesAritmeticas.cpp
Programador: Luis Ortiz
Descripcion:  Este programa se utiliza para validar la seleccion de una opcion en
              un MENU de "OPERACIONES ALGEBRAICAS"
              Para ello deben de leer por pantalla 2 numeros enteros y efectuar
              la operacion algebraica con dichos numeros dependiendo de la opcion
              seleccionada
** Entre el primer numero:
** Entre el segundo numero:


Fecha de compilacion: 28/04/2021
Version del programa: 01
*/

/*
**************************************
*             MENU                   *
*                                    *
*    OPERACIONES ARITMETICAS         *
*                                    *
*       1. SUMA                      *
*       2. RESTA                     *
*       3. MULTIPLICACION            *
*       4. DIVISION                  *
*                                    *
**************************************
** Entre la opcion deseada:         **

*/


#include <stdio.h>

int  main()
{
//Declaracion de Variables
int opcion = 0;
float num1,num2, operacion;

//ENTRADA DE DATOS
printf("Entre el primer numero: ");
scanf("%f", &num1);

printf("Entre el segundo numero: ");
scanf("%f", &num2);

//DESPLIEGUE DEL MENU POR PANTALLA
printf("\n\n ************************************** \n");
printf(" *             MENU                   * \n");
printf(" *                                    * \n");
printf(" *    OPERACIONES ARITMETICAS         * \n");
printf(" *                                    * \n");
printf(" *       1. SUMA                      * \n");
printf(" *       2. RESTA                     * \n");
printf(" *       3. MULTIPLICACION            * \n");
printf(" *       4. DIVISION                  * \n");
printf(" *                                    * \n");
printf(" ************************************** \n");
printf(" ** Entre la opcion deseada:          \n");
scanf("%d", &opcion);

if (opcion == 1 ) {
  operacion = num1 + num2;
  printf("\nLa suma es %.2f + (%.2f) = %.2f \n", num1, num2, operacion);
}
else if (opcion == 2 ) {
  operacion = num1 - num2;
  printf("\nLa resta es %.2f - (%.2f) = %.2f \n", num1, num2, operacion);
}
else if (opcion == 3 ) {
  operacion = num1 * num2;
  printf("\nLa multiplicacion %.2f * (%.2f) = %.2f \n", num1, num2, operacion);
}
else if (opcion == 4 && num2 != 0 ) {
  operacion = num1 / num2;
  printf("\nLa division %.2f / (%.2f) = %.2f \n", num1, num2, operacion);
}
else
  printf("Opcion invalida\n");
return 0;
}
