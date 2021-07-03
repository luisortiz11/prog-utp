/*Nombre del Programa: estructurarep
Programador: Luis Ortiz
Fecha de compilacion: 19/05/2021
Version del programa: 01
Descripcion:
 */

#include <stdio.h>
#include <stdlib.h>

int  main()
{
  int contador;
  float p1, suma = 0;

  for (contador = 1; contador <= 3; contador++) {
    printf("\n Entre parcial %d: ", contador);
    scanf("%f", &p1);
    suma += p1;
  }

  printf("\nTotal: %f", suma);
  printf("\nPromedio: %f\n", suma/3);

return 0;
}
