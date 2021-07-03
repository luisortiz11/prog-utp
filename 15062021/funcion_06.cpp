/*Nombre del Programa:Areacircumferencia01.cpp
Programador: Luis Ortiz
Fecha de compilacion: 15/06/2021
Version del programa: 0
Descripcion: FUNCION QUE RECIBE UN PARAMETRO Y RETORNA UN VALOR.
LA FUNCIÓN AL MOMENTO DE RETORNAR EJECUTA DIRECTAMENTE EN LINEA LA EXPRESION
QUE SE REQUIERE PARA CALCULAR EL ÁREA DEL CIRCULO Y RETORNA UN VALOR.
LA IMPRESIÓN DEL AREA DEL CIRCULO SE HACE DIRECTAMENTE EN EL PROGRAMA PRINCIPAL PERO ANTES EL VALOR QUE DEVUELVE LA FUNCIÓN SE LE PASA A LA VARIBLEA AREA.

*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

const float pi = 3.1416;
float AreaCirculo(float);

int  main()
{
float area, radio = 5;
area = AreaCirculo(radio);
printf("\n Area de un circulo de radio %.2f es %.3f \n", radio, area );

return 0;
}

float AreaCirculo(float r) {
  return pi*r*r;
}
