/*Nombre del Programa: 3M-CASO04
Programador: Luis Ortiz
Fecha de compilacion: 26/05/2021
Version del programa: 01
Descripcion:Elabore un algoritmo que calcule el promedio de las notas de los 3 parciales de Programación
y diga su calificación final si se dispone de la siguiente tabla de puntuación para su evaluación.
 */

#include <stdio.h>

int  main()
{
  float p1,p2,p3,promedio;

  printf("Entre las notas de los 3 parciales: ");
  scanf("%f %f %f", &p1, &p2, &p3);

  promedio = (p1+p2+p3)/3;

  if (promedio<0 || promedio>100)
    printf("\nOjo promedio fuera de rango\n");
  else
   {
     if (promedio<61)
       printf("\nTiene F\n");
       else if (promedio<71)
         printf("\nTiene D\n");
         else if (promedio<81)
           printf("\nTiene C\n");
           else if (promedio<91)
             printf("\nTiene B\n");
             else
               printf("\nTiene A\n");
      }

return 0;
}