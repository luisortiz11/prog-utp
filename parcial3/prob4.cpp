/*Nombre del Programa:Parcial3_problema4.cpp
Programador: Luis Ortiz
Fecha de compilacion: 13/07/2021
Version del programa: 0
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int  main()
{

  int i;
  int cantidad[3] = {0,0,0};
  float preciou[3] = {0,0,0};
  float total[3] = {0,0,0};
  float tot=0;
  static char libro[3][15] = {"Calculo", "Fisica", "Electronica"};

  for (i = 0; i < 3; i++) {
    printf("Entre cantidad y precio unitario de libro de %s\n", libro[i]);
    scanf("%d %f", &cantidad[i], &preciou[i]);
    total[i] = cantidad[i]*preciou[i];
    tot += total[i];
  }


  system("cls");
  printf(" \t\t LIBRERIA UTP - REPORTE DE VENTAS \t\t \n");
  printf("\tCodigo \t Descripcion \t Cantidad \t Precio unitario \t\t Total ");
  for (i = 0; i < 3; i++) {
    printf("\n\t%d \t %s \t %d \t\t %0.2f \t\t %0.2f \n", i+1, libro[i], cantidad[i], preciou[i], total[i]);
  }
  printf("\t\t\t\t\t\tTotal: %0.2f \n ", tot);

return 0;
}
