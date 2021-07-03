/*
Programador: Luis Ortiz
Descripcion: Elabore un programa que introduzca por teclado las notas de tres parciales de un estudiante,
calcule su promedio e imprima un mensaje por pantalla diciendo la nota obtenida de acuerdo a la siguiente tabla de puntuación para su evaluación.
CALIFICACION
PUNTAJE	NOTA
91 - 100	“A”
81 - 90	“B”
71 - 80	“C”
61 - 70	“D”
0  -   60	“F”
*/

#include <stdio.h>

int  main()
{

  float p1,p2,p3,promedio;

  printf("Entre las notas de los 3 parciales: ");
  scanf("%f %f %f", &p1, &p2, &p3);

  promedio = (p1+p2+p3)/3;

  if (p1>=0 && p1<=100 && p2>=0 && p2<=100 && p3>=0 && p3<=100) {
     if (promedio<61)
       printf("\nPromedio = %0.2f. Su nota es F\n", promedio);
       else if (promedio<71)
         printf("\nPromedio = %0.2f. Su nota es D\n", promedio);
         else if (promedio<81)
           printf("\nPromedio = %0.2f. Su nota es C\n", promedio);
           else if (promedio<91)
             printf("\nPromedio = %0.2f. Su nota es B\n", promedio);
             else
               printf("\nPromedio = %0.2f. Su nota es A\n", promedio);
  }
  else
    printf("\nNota(s) fuera de rango (0-100)\n");

return 0;
}
