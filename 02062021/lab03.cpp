/*Nombre del Programa:Areacircumferencia01.cpp
Programador: Luis Ortiz
Fecha de compilacion: 02/06/2021
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

int i=1;
do {
  printf("Entre el radio: ");
  scanf("%f", &radio);
  printf("\nEl area es: %0.3f \n", areacirc(radio));
  system("pause");
  system("cls");
  i++;
} while(i<6);

return 0;
}

float areacirc(float radio) {
  return 3.1416*pow(radio,2);
}
