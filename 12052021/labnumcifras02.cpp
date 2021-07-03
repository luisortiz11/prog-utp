/*
*************************************************
              PROBLEMA NO 1

*************************************************
LABORATORIO 12 DE MAYO 2021, PRACTICA DE CONDICIONALES MULTIPLES
Nombre del Programa: LABNUM2CRIFRAS02.CPP
Programador: Luis Ortiz
Fecha de compilacion: 12/05/2021
Version del programa: 02
Descripcion: PROGRAMA QUE LEE UN NUMERO ENTERO POSITIVO POR PANTALLA
Y DICE SI ES DE 3 CIFRAS*/

#include <stdio.h>

int  main()
{
//Declaracion de Variables
int num;

//Lectura de las variables
printf("Entre un numero entero: ");
scanf("%d", &num);

//PROCESO
// num<100 || num>999
if (num>=100 && num<=999) {
  printf("El numero %d tiene 3 cifras", num);
}
else
  printf("El numero no esta dentro del rango\n");

return 0;
}
