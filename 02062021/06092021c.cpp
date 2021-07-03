/*Nombre del Programa:Funcion09a.cpp
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

float resta(float, float);


int  main()
{
float a, b;

printf("Entre 2 numeros: ");
scanf("%f %f", &a, &b);
printf("\n%0.2f - %0.2f = %0.2f \n", a, b, resta(a,b));

return 0;
}

float resta(float a, float b) {
  return a-b;
}
