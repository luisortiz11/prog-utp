/*Nombre del Programa:Areacircumferencia01.cpp
Programador: Luis Ortiz
Fecha de compilacion: 15/06/2021
Version del programa: 0
Descripcion: calcular el area de una circumferencia
Area = pi*r^2
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

const float pi = 3.1416;
void AreaCirculo(float);

int  main()
{
float radio = 5;
AreaCirculo(radio);
return 0;
}

void AreaCirculo(float r) {
  float area;
  area = pi*r*r;
  printf("\n Area de un circulo de radio %.2f es %.3f \n", r, area );
  return;
}
