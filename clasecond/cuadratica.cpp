/*Nombre del Programa:cuadratica
Programador: Luis Ortiz
Fecha de compilacion: 28/04/2021
Version del programa: 01
Descripcion: Ecuaciones de segundo grado */

#include <stdio.h>
#include <math.h>

int  main()
{
//Declaracion de Variables
float a, b, c, d, y, x1, x2, im1, im2, re, inf;

//Lectura de las variables
printf("Entre el valor de la a: ");
scanf("%f", &a);

printf("Entre el valor de la b: ");
scanf("%f", &b);

printf("Entre el valor de la c: ");
scanf("%f", &c);

//PROCESO
d = b*b - 4*a*c;
re = -b/(2*a);
y = a*re*re + b*re + c;


if (d>0) {
  x1 = (-b + sqrt(d))/(2*a);
  x2 = (-b - sqrt(d))/(2*a);
  printf("\nx1 = %f\nx2 = %f \n", x1 , x2);
}
else if (d<0) {
  im1 = (sqrt(-d))/(2*a);
  im2 = (-sqrt(-d))/(2*a);
  printf("\nx1 = %f + %f i\nx2 = %f %f i \n", re, im1, re, im2);
}
else {
  x1 = -b/(2*a);
  printf("\n x = %f \n", x1);
}

if (2*a > 0) {
  printf("\nEn x = %f , y = %f esta el punto critico de la parabola.\nEs un minimo relativo.\nLa parabola es concava hacia arriba\n", re, y);
}
else if (2*a < 0) {
  printf("\nEn x = %f, y = %f esta el punto critico de la parabola.\nEs un maximo relativo.\nLa parabola es concava hacia abajo\n", re, y);
}

return 0;
}
