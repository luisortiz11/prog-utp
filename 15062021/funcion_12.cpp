/*Nombre del Programa:Areacircumferencia01.cpp
Programador: Luis Ortiz
Fecha de compilacion: 15/06/2021
Version del programa: 0
Descripcion: ELABORAR UN PROGRAMA QUE UTILICE FUNCIONES MEDIANTE UN MENU DE LAS OPERACIONES ARITMÉTICAS:
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

float Suma(int, int);
float Resta(int, int);
float Multiplicacion(int, int);
float Division(float, float);

int  main()
{
  int opcion;
  float a=2,b=4;

  printf("\n ************************************** \n");
  printf(" *             MENU                   * \n");
  printf(" *                                    * \n");
  printf(" *       1. Suma                      * \n");
  printf(" *       2. Resta                     * \n");
  printf(" *       3. Multiplicacion            * \n");
  printf(" *       4. Division                  * \n");
  printf(" *                                    * \n");
  printf(" *       5. Salir                     * \n");
  printf(" ************************************** \n");
  printf("\nEntre el numero de la opcion (1-5): ");
  scanf("%d", &opcion);

  switch (opcion) {
    case 1: printf("\nLa suma de %.2f + %.2f es %.2f \n", a, b, Suma(a,b));
    break;

    case 2: printf("\nLa resta de %.2f - %.2f es %.2f \n", a, b, Resta(a,b));
    break;

    case 3: printf("\nLa multiplicacion de %.2f * %.2f es %.2f \n", a, b, Multiplicacion(a,b));
    break;

    case 4: printf("\nLa division de %.2f / %.2f es %.2f \n", a, b, Division(a,b));
    break;

    case 5: break;

    default: printf("\nOpcion invalida\n");
  }

return 0;
}

float Suma(int x, int y) {
  return x+y;
}

float Resta(int x, int y) {
  return x-y;
}

float Multiplicacion(int x, int y) {
  return x*y;
}

float Division(float x, float y) {
  return x/y;
}
