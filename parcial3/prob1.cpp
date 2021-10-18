/*Nombre del Programa:Parcial3_problema1.cpp
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
  int i, j, k;
  static char nombres[350][40], cuenta[350][5];
  float depositos[12][350];
  float total[350];

  for (i = 0; i < 350; i++){
    system("cls");
    printf("Nombre: ");
    gets(nombres[i]);
    fflush(stdin);
    printf("Num. Cuenta: ");
    gets(cuenta[i]);
    fflush(stdin);
    printf("Mes \t\t Deposito \n");

    for (j = 0; j < 12; j++) {
      printf("%d  \t\t ", j+1 );
      scanf("%f", &depositos[j][i]);
      total[i] += depositos[j][i];
    }

    printf("\nTotal Ahorrado en el año: Nombre: %s, Num. Cuenta: %s, Total Ahorrado = %0.2f\n", nombres[i], cuenta[i], total[i]);
    if(total[i]>500)
      printf("Total Ahorrado mas incentivo: %0.2f \n", 1.12*total[i]);
    else
      printf("Total Ahorrado mas incentivo: %0.2f \n", 1.05*total[i]);

    system("pause");
    fflush(stdin);
}
return 0;
}
