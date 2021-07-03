/*Nombre del Programa: 4CASO03
Programador: Luis Ortiz
Fecha de compilacion: 26/05/2021
Version del programa: 01
Descripcion:Un obrero necesita calcular su salario semanal, el cual se obtiene de la siguiente manera:
Si trabaja 40 horas o menos se le paga un salario de 16 dólares por hora, si trabaja más
de 40 horas se le paga un salario de 16 dólares por cada una delas primeras 40 horas y
un salario de 20 dólares por cada hora extra.
 */

#include <stdio.h>

int  main()
{
  float horas, salario, hextras, salarioconextras, salariototal;

  printf("Introduzca las horas trabajadas en la semana: ");
  scanf("%f", &horas);

  if (horas>0) {
    if (horas<=40) {
      salario = horas*16;
      printf("\nSalario del obrero es: %0.2f \n", salario);
    }
    else {
      hextras = horas - 40;
      salarioconextras = hextras*20;
      salario = 40*16;
      salariototal = salarioconextras + salario;
      printf("\nSalario del obrero con horas extras es: %0.2f\n", salariototal);
    }
  }
  else
    printf("\nHORAS INVALIDAS\n");


return 0;
}
