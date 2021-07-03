/*Nombre del Programa:cuadratica
Programador: Luis Ortiz
Fecha de compilacion: 05/05/2021
Version del programa: 01
Descripcion: Determina cual valor es el mayor entre 2 numeros enteros*/

#include <stdio.h>

int  main()
{
//Declaracion de Variables
int a, b;

//Lectura de las variables
printf("Entre el valor de a: ");
scanf("%d", &a);

printf("Entre el valor de b: ");
scanf("%d", &b);

//PROCESO

if (a>b) {
  printf("\na es mayor que b.\n");
}
else if (a<b) {
  printf("\nb es mayor que a.\n");
}
else
  printf("\na es igual a b.\n");

return 0;
}
