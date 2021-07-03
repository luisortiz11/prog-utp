/*Nombre del Programa:cuadrados110
Programador: Luis Ortiz
Fecha de compilacion: 02/06/2021
Version del programa: 05
Descripcion: numeros impares desde 1 al 10*/

#include <stdio.h>

int  main()
{

int i;

printf("CICLO FOR \n");
for (i = 1; i <= 10; i=i+2) {
  printf("%d\n", i);
}

printf("\nCICLO WHILE \n");
i=1;
while (i<=10) {
  printf("%d\n", i);
  i+=2;
}

printf("\nCICLO DO WHILE \n");
i=1;
do {
  printf("%d\n", i);
  i+=2;
} while(i<=10);

return 0;
}
