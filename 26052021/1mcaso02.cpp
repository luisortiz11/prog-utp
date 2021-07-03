/*Nombre del Programa: 1M-CASO02
Programador: Luis Ortiz
Fecha de compilacion: 26/05/2021
Version del programa: 01
Descripcion:Entre un número entero por pantalla y diga el Día de la semana en palabras.
 */

#include <stdio.h>

int  main()
{
  int dia;

  printf("Entre el dia de la semana: ");
  scanf("%d", &dia);

  if (dia>0 && dia<=7){
    if (dia == 1)
      printf("\nHoy es lunes!\n");
    else if (dia == 2)
      printf("\nHoy es martes!\n");
      else if (dia == 3)
        printf("\nHoy es miercoles!\n");
        else if (dia == 4)
          printf("\nHoy es jueves!\n");
          else if (dia == 5)
            printf("\nHoy es viernes!\n");
            else if (dia == 6)
              printf("\nHoy es sabado!\n");
              else
                printf("\nHoy es domingo!\n");
    }
    else
      printf("\nDia errado\n");

return 0;
}
