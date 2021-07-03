/*Nombre del Programa: Problema 2
Programador: Luis Ortiz
Fecha de compilacion: 02/06/2021
Version del programa:
Descripcion: Elaborar un programa que le permita al usuario calcular varias distancias entre dos
puntos en el plano cartesiano, para ello el usuario terminará cuando oprima la tecla
“s"*/

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
