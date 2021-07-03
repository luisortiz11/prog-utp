/*Nombre del Programa:Parcial2_problema3.cpp
Programador: Luis Ortiz
Fecha de compilacion: 19/06/2021
Version del programa: 0
Descripcion: Se desea registrar el promedio de la producción
diaria de unidades de Microcontroladores hechas por 10 operarios
a lo largo de la semana (lunes hasta sábado).
Elabore un programa que nos muestre o nos diga si el operario
“Recibe Incentivo “ ó “No Recibe Incentivo”, sabiendo que el promedio de producción
 mínima es de 100 unidades para poder recibir el incentivo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int  main()
{

  int i = 0, j = 0, prod = 0, total = 0;
  int cont[10] = {0,0,0,0,0,0,0,0,0,0};
  static char dia[7][10] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};


  for (i = 0; i < 6; i++) {
    printf("%s\n", dia[i]);

    for (j = 0; j <= 9; j++) {
      printf("Entre la produccion del operario %d: ", j+1);
      scanf("%d", &prod);
      cont[j] +=prod;
    }
  }
  i = 0;
  printf("Reporte");
  for (i = 0; i <= 9; i++) {
    if (cont[i]/6 >=100) {
      printf("\nOperario %d : RECIBE INCENTIVO\n", i+1 );
    }
    else
      printf("\nOperario %d : NO RECIBE INCENTIVO\n", i+1);

    total += cont[i];
  }

return 0;
}
