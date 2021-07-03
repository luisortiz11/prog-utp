/*Nombre del Programa: problema2
Programador: Luis Ortiz
Fecha de compilacion: 18/05/2021
Version del programa: 01
Descripcion: Se tiene cuatro pines digitales numerados 1,2,3,4 en donde a cada pin
le corresponde encender un LED (“Rojo”,”Verde”,”Azul”,”Amarillo”) respectivamente.
Haga un programa que encienda uno de los LEDS mediante un mensaje a Pantalla al
introducir por teclado un número entero correspondiente a uno de los cuatro pines.
 */

#include <stdio.h>
#include <stdlib.h>

int  main()
{
  int opcion, rojo = 0, verde = 0, azul = 0, amarillo = 0;
  static char estado[2][10] = {"Apagado", "Encendido"};

  while (0==0) {
    printf("\n\n ************************************** \n");
    printf(" *             MENU                   * \n");
    printf(" *                                    * \n");
    printf(" *    Colores:                        * \n");
    printf(" *                                    * \n");
    printf(" *       1. Rojo                      * \n");
    printf(" *       2. Verde                     * \n");
    printf(" *       3. Azul                      * \n");
    printf(" *       4. Amarillo                  * \n");
    printf(" *                                    * \n");
    printf(" *       5. Salir                     * \n");
    printf(" ************************************** \n");
    printf(" ** Entre el color del led (1-4):       \n");
    scanf("%d", &opcion);

    system("cls");


    if (opcion == 1 ) {
      if (rojo == 0) {
        rojo = 1; }
      else if (rojo == 1) {
        rojo = 0; }
      printf("El led rojo esta: %s\n\n\n", estado[rojo]);
    }
    else if (opcion == 2 ) {
      if (verde == 0) {
        verde = 1; }
      else if (verde == 1) {
        verde = 0; }
      printf("El led verde esta: %s\n\n\n", estado[verde]);
    }
    else if (opcion == 3 ) {
      if (azul == 0) {
        azul = 1; }
      else if (azul == 1) {
        azul = 0; }
        printf("El led azul esta: %s\n\n\n", estado[azul]);
    }
    else if (opcion == 4 ) {
      if (amarillo == 0) {
        amarillo = 1; }
      else if (amarillo == 1) {
        amarillo = 0; }
        printf("El led verde esta: %s\n\n\n", estado[amarillo]);
    }
    else if (opcion == 5 ) {
      break;
    }
    else
      printf("Opcion invalida\n");
  }


return 0;
}
