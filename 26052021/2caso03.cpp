/*Nombre del Programa: 2CASO03
Programador: Luis Ortiz
Fecha de compilacion: 26/05/2021
Version del programa: 01
Descripcion:Determinar si un alumno aprueba o reprueba el curso de programación de computadoras
si su promedio es mayor o igual que 71 puntos, reprobará en caso contrario.
 */

#include <stdio.h>

int  main()
{
  float prom;

  printf("Entra el promedio del estudiante: ");
  scanf("%f", &prom);

  if (prom<0 || prom>100) {
    printf("\nPromedio Invalido\n");
  }
  else if (prom<71) {
    printf("\nReprobo\n");
  }
    else
      printf("\nAprueba\n");


return 0;
}
