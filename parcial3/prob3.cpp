/*Nombre del Programa:Parcial2_problema3.cpp
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
  float promedio = 0;
  char nombres[5][40];
  float p[3][5];
  char notas[5];

  for (i = 0; i <= 4; i++) {
    printf("Entre el nombre:");
    scanf("%s", &nombres[i]);
    fflush(stdin);
    printf("Entre las notas de los 3 parciales: ");
    scanf("%f %f %f", &p[0][i], &p[1][i], &p[2][i]);
    fflush(stdin);
    system("cls");

    promedio = (p[0][i]+p[1][i]+p[2][i])/3;

    if (promedio<61)
      notas[i] = 'F';
      else if (promedio<71)
        notas[i] = 'D';
        else if (promedio<81)
          notas[i] = 'C';
          else if (promedio<91)
            notas[i] = 'B';
            else
              notas[i] = 'A';

}

  printf("Nombre del estudiante \t\t Calificacion \n");

  i = 0;
  for (i = 0; i <= 4; i++){

    printf("\t %s \t\t\t %c \n", nombres[i], notas[i] );
    }


return 0;
}
