/*Nombre del Programa:Parcial2_problema4.cpp
Programador: Luis Ortiz
Fecha de compilacion: 19/06/2021
Version del programa: 0
Descripcion:Se desea un programa que lea el nombre de 10 estudiantes,
calcule el promedio de los 3 parciales de Programación e imprima su nombre
y calificación (“A”, “B”,”C”,” D”,” F”).
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <cstdlib>


int  main()
{
  int i = 0;
  char nombres[10][40];
  char notas[10];
  float p1 = 0, p2 = 0, p3 = 0, promedio = 0;

  for (i = 0; i <= 9; i++) {
    printf("\nEntre el nombre:");
    scanf("%s", &nombres[i]);
    fflush(stdin);
    printf("Entre las notas de los 3 parciales: ");
    scanf("%f %f %f", &p1, &p2, &p3);
    fflush(stdin);
    system("cls");

    promedio = (p1+p2+p3)/3;

    if (p1>=0 && p1<=100 && p2>=0 && p2<=100 && p3>=0 && p3<=100) {
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
    else
      printf("\nNota(s) fuera de rango (0-100)\n");

  }


  for (i = 0; i <= 9; i++) {
    printf("\nNombre: %s", nombres[i]);
    printf("\nCalificacion: %c \n", notas[i]);
  }


return 0;
}
