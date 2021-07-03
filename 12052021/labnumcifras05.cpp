/*
*************************************************
              PROBLEMA NO 1

*************************************************
LABORATORIO 12 DE MAYO 2021, PRACTICA DE CONDICIONALES MULTIPLES
Nombre del Programa: LABNUM2CRIFRAS03.CPP
Programador: Luis Ortiz
Fecha de compilacion: 12/05/2021
Version del programa: 03
Descripcion: PROGRAMA QUE LEE UN NUMERO ENTERO POSITIVO POR PANTALLA
Y DICE SI ES DE 3 CIFRAS*/
//VALIDAMOS EL ERROR PRIMERO Y LUEGO ENTRAMOS A VALIDAR LOS NUMEROS CORRECTOS
#include <stdio.h>

int  main()
{
//Declaracion de Variables
int num;

//Lectura de las variables
printf("Entre un numero entero: ");
scanf("%d", &num);

//PROCESO
//
if (num>=0 && num<=999) {
  if (num>=100) {
    printf("El numero %d tiene 3 cifras\n", num);
  }
  else if (num>=10) {
    printf("El numero %d tiene 2 cifras\n", num);
  }
  else
    printf("El numero %d tiene 1 cifra\n", num);
}
else
  printf("El numero esta fuera del rango\n");


return 0;
}
