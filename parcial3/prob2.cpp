/*Nombre del Programa:Parcial3_problema2.cpp
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

  int i, mayor, ind;
  int stock[3] = {0,0,0};
  static char sensor[3][15] = {"Ultrasonico", "Temperatura", "IR"};

  system("cls");
  printf("Num. Articulo \t\t Descripcion \t\t Stock Actual \n");
  for (i = 0; i < 3; i++) {
    printf("\t%d \t\t %s \t\t ", i+1, sensor[i]);
    fflush(stdin);
    scanf("%d", &stock[i]);
  }
  fflush(stdin);

  if(stock[0] >= stock[1] && stock[0] >= stock[2]){
        mayor = stock[0];
        ind = 0;
      }
    if(stock[1] >= stock[0] && stock[1] >= stock[2]){
        mayor = stock[1];
        ind = 1;
    }
    if(stock[2] >= stock[0] && stock[2] >= stock[1]){
        mayor = stock[2];
        ind = 2;
      }
  printf("Mayor stock Actual: %i ", mayor);
  printf("Articulo numero: %i ", ind+1);


return 0;
}
