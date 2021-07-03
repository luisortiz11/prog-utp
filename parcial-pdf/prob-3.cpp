/*Nombre del Programa: Problema 3
Programador: Luis Ortiz
Fecha de compilacion: 02/06/2021
Version del programa:
Descripcion: Un arquitecto desea un programa que le calcule automáticamente el costo total por
la construcción de una piscina si se le introduce sus dimensiones en metros del
largo, ancho y alto para que calcule el volumen, si v=largo*ancho*altura y le permita
introducir su precio por metros cúbico de agua. Para el costo total de la piscina, este
deberá calcularse multiplicando el volumen por el precio.
El arquitecto quiere que este programa lo pueda utilizar para realizar varios cálculos
(n cálculos) ya que tiene muchos proyectos pendientes y desea solucionar los
mismos en la aplicación solicitada
*/

#include <stdio.h>
#include <math.h>
#include <conio.h>

int  main()
{

float distancia, x1, x2, y1, y2;
int tecla = 0;

printf("Calcular distancia entre 2 puntos del plano cartesiano\n");

do
{
    printf("\nEntre 2 puntos en la forma (x1,y1) (x2,y2): ");
    scanf("(%f,%f) (%f,%f)", &x1, &y1, &x2, &y2);

    distancia = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("\nLa distancia entre los puntos es %f \n", distancia);

} while (tecla=0);



return 0;
}
