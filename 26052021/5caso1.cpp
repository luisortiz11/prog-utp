/*Nombre del Programa: 5CASO01
Programador: Luis Ortiz
Fecha de compilacion: 26/05/2021
Version del programa: 01
Descripcion:Leer dos números e imprimirlos en forma ascendente
 */

#include <stdio.h>

int  main()
{
  float n1,n2;

  printf("Entre dos numeros cualquiera: ");
  scanf("%f %f", &n1, &n2);

  if (n1>n2) {
    printf("\nNumero mayor en forma ascendente es: %f %f \n", n2,n1);
  }
  else
    printf("\nNumero mayor en forma ascendente es: %f %sf \n", n1,n2);

return 0;
}
