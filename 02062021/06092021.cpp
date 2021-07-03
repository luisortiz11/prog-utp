/*Nombre del Programa:Areacircumferencia07a.cpp
Programador: Luis Ortiz
Fecha de compilacion: 09/06/2021
Version del programa: 0
Descripcion: calcular el area de una circumferencia
Area = pi*r^2
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

float areacirc(float);


int  main()
{
float pi = 3.1416, radio;

printf("Entre el radio: ");
scanf("%f", &radio);
printf("\nArea de un circulo de radio %.2f es: %0.3f \n", radio, areacirc(radio));

return 0;
}

float areacirc(float radio) {
  return 3.1416*pow(radio,2);
}
