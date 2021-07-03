/*
Programador: Luis Ortiz
Descripcion: Se tienen 3 Leds: Rojo, Verde y Azul instalados en el Protoboard y conectados a la placa del Arduino mediante cables a los pines 3,4 y 5 respectivamente.
Elaborar un programa que encienda uno de los leds de acuerdo al valor del pin entrado por teclado, mediante un mensaje enviado por pantalla.
(Usar Menu y switch).
*/

#include <stdio.h>

int  main()
{
  int opcion;

  printf("\n ************************************** \n");
  printf(" *             MENU                   * \n");
  printf(" *                                    * \n");
  printf(" *       1. Rojo                      * \n");
  printf(" *       2. Verde                     * \n");
  printf(" *       3. Azul                      * \n");
  printf(" *                                    * \n");
  printf(" *       4. Salir                     * \n");
  printf(" ************************************** \n");
  printf("\nEntre el numero del pin (1-3) para encender el led del color correspondiente: ");
  scanf("%d", &opcion);

  switch (opcion) {
    case 1: printf("\nEl led rojo esta encendido\n");
    break;

    case 2: printf("\nEl led verde esta encendido\n");
    break;

    case 3: printf("\nEl led azul esta encendido\n");

    case 4: break;

    default: printf("\nOpcion invalida\n");
  }

return 0;
}
