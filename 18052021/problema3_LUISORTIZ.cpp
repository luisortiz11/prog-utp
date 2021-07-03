/*Nombre del Programa: problema3
Programador: Luis Ortiz
Fecha de compilacion: 18/05/2021
Version del programa: 01
Descripcion: Se tiene un DIP SWITCH con 4 interruptores (0,1,2,3) en donde
cada interruptor tiene la función de activar la luz de la “Terraza”, “Sala”, “Comedor”  y “Recamara” respectivamente.
Realice un programa que solicite por teclado un numero entero de manera que al introducirlo encienda la luz correspondiente mediante un MENSAJE.
 */

#include <stdio.h>
#include <stdlib.h>

int  main()
{
  int opcion, terraza = 0, sala = 0, comedor = 0, recamara = 0;
  static char estado[2][10] = {"Apagado", "Encendido"};

  while (0==0) {
    printf("\n\n ************************************** \n");
    printf(" *             MENU                   * \n");
    printf(" *                                    * \n");
    printf(" *   Encender luz de :                * \n");
    printf(" *                                    * \n");
    printf(" *       1. Terraza                   * \n");
    printf(" *       2. Sala                      * \n");
    printf(" *       3. Comedor                   * \n");
    printf(" *       4. Recamara                  * \n");
    printf(" *                                    * \n");
    printf(" *       5. Salir                     * \n");
    printf(" ************************************** \n");
    printf(" ** Entre el foco a encender (1-4):     \n");
    scanf("%d", &opcion);

    system("cls");

    if (opcion == 1 ) {
      if (terraza == 0) {
        terraza = 1; }
      else if (terraza == 1) {
        terraza = 0; }
      printf("El foco de la terraza esta: %s\n\n\n", estado[terraza]);
    }
    else if (opcion == 2 ) {
      if (sala == 0) {
        sala = 1; }
      else if (sala == 1) {
        sala = 0; }
      printf("El foco de la sala esta: %s\n\n\n", estado[sala]);
    }
    else if (opcion == 3 ) {
      if (comedor == 0) {
        comedor = 1; }
      else if (comedor == 1) {
        comedor = 0; }
        printf("El foco del comedor esta: %s\n\n\n", estado[comedor]);
    }
    else if (opcion == 4 ) {
      if (recamara == 0) {
        recamara = 1; }
      else if (recamara == 1) {
        recamara = 0; }
        printf("El foco de la recamara esta: %s\n\n\n", estado[recamara]);
    }
    else if (opcion == 5 ) {
      break;
    }
    else
      printf("Opcion invalida\n");
  }


return 0;
}
