/*Nombre del Programa:Areacircumferencia01.cpp
Programador: Luis Ortiz
Fecha de compilacion: 15/06/2021
Version del programa: 0
Descripcion: FUNCION QUE RECIBE DOS PARAMETROS Y RETORNA UN VALOR.
LA FUNCIÓN AL MOMENTO DE RETORNAR EJECUTA DIRECTAMENTE EN LINEA LA EXPRESION
QUE SE REQUIERE PARA CALCULAR LA SUMA DE DOS NUMEROS Y RETORNA UN VALOR.
LA IMPRESIÓN DE LA SUMA  SE HACE DIRECTAMENTE EN EL PROGRAMA PRINCIPAL DENTRO DE LA INSTRUCCIÓN PRINTF

*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>


float Suma(int, int);

int  main()
{
float a=2, b=4;
printf("\nLa suma de %.2f + %.2f es %.2f \n", a, b, Suma(a,b) );

return 0;
}

float Suma(int x, int y) {
  printf("\nSuma de %d + %d = %d",x,y, x+y);
  return x+y;
}
