/*Nombre del Programa:Funcion09b.cpp
Programador: Luis Ortiz
Fecha de compilacion: 09/06/2021
Version del programa: 0
Descripcion: calcular resta de 2 numeros con funcion
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

float resta(int, int);


int  main()
{
int a, b;

printf("Entre 2 numeros: ");
scanf("%d %d", &a, &b);
printf("\n%d - %d = %0.2f \n", a, b, resta(a,b));

return 0;
}

float resta(int a, int b) {
  return a-b;
}
