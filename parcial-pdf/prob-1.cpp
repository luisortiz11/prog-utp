/*Nombre del Programa: Problema 1
Programador: Luis Ortiz
Fecha de compilacion: 02/06/2021
Version del programa:
Descripcion: Se desea registrar el promedio de la producción diaria de unidades hechas por un
operario a lo largo de la semana (lunes hasta sábado). Elabore un programa que
nos muestre o nos diga si el operario “Recibe Incentivo “ ó “No Recibe Incentivo”,
sabiendo que el promedio de producción mínima es de 100 unidades para poder
recibir el incentivo.*/

#include <stdio.h>

int  main()
{

int i;
static char dia[6][10] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
float produccion, promedio, suma = 0;

for (i = 0; i <= 5; i++) {
  printf("Entre la produccion del dia %s: ", dia[i]);
  scanf("%f", &produccion);
  suma += produccion;
}

if (suma/6 >= 100)
  printf("\nRecibe incentivo\n");
else
  printf("\nNo recibe incentivo\n");


return 0;
}
