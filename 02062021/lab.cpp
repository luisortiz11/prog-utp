/*Nombre del Programa:MenuOpeAritmetica_01.cpp
Programador: Luis Ortiz
Fecha de compilacion: 02/06/2021
Version del programa: 0
Descripcion: calculadora*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int  main()
{

float num1, num2;
char opcion;

printf("\nEntre los 2 numeros: ");
scanf("%f %f", &num1 , &num2 );

printf("\n ************************************** \n");
printf(" *             MENU                   * \n");
printf(" *                                    * \n");
printf(" *       +. Suma                      * \n");
printf(" *       -. Resta                     * \n");
printf(" *       *. Multiplicacion            * \n");
printf(" *       /. Division                  * \n");
printf(" *                                    * \n");
printf(" *                                    * \n");
printf(" *       5. Salir                     * \n");
printf(" ************************************** \n");
printf("\nEntre el simbolo de la operacion: ");
fflush(stdin);
opcion = getchar();

switch (opcion) {
  case '+':
    puts("\nSUMA");
    printf("%0.2f + %0.2f = %0.2f \n", num1, num2, num1+num2);
    break;
  case '-':
    puts("\nRESTA");
    printf("%0.2f - %0.2f = %0.2f \n", num1, num2, num1-num2);
    break;
  case '*':
    puts("\nMULTIPLICACION");
    printf("%0.2f * %0.2f = %0.2f \n", num1, num2, num1*num2);
    break;
  case '/':
    puts("\nDIVISION");
    if (num2!=0) {
      printf("%0.2f / %0.2f = %0.2f \n", num1, num2, num1/num2);
    }
    else
      printf("\n Division invalida");
    break;
  default:
    puts("Error \n");
    break;
}
return 0;
}
