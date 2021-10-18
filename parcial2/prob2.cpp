/*Nombre del Programa:Parcial2_problema2.cpp
Programador: Luis Ortiz
Fecha de compilacion: 19/06/2021
Version del programa: 0
Descripcion: Desarrollar un programa que lea la cantidad de Tipos de Arduinos
(Uno, Mega, Micro, Nano y Yun) a exportar durante la semana de lunes a viernes e
imprima un reporte del total de Arduinos según tipo a exportar al final de la semana
y cuanto fue la exportación total.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int  main()
{

  int i = 0, uno = 0, mega = 0, micro = 0, nano = 0, yun = 0, total = 0;
  int cont[5] = {0,0,0,0,0};
  static char dia[7][10] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};


  for (i = 0; i < 7; i++) {
    printf("%s\n", dia[i]);
    fflush(stdin);
    printf("Entre la cantidad de arduinos UNO, MEGA, MICRO, NANO, YUN: ");
    scanf("%d %d %d %d %d", &uno, &mega, &micro, &nano, &yun);
    cont[0] += uno;
    cont[1] += mega;
    cont[2] += micro;
    cont[3] += nano;
    cont[4] += yun;
    uno = 0, mega = 0, micro = 0, nano = 0, yun = 0;

  }

  for (i = 0; i < 5; i++) {
    total += cont[i];
  }
  system("cls");
  printf("Reporte total semanal");
  printf("\nUNO: %d", cont[0]);
  printf("\nMEGA: %d", cont[1]);
  printf("\nMICRO: %d", cont[2]);
  printf("\nNANO: %d", cont[3]);
  printf("\nYUN: %d", cont[4]);
  printf("\n\nTOTAL: %d", total);


return 0;
}
