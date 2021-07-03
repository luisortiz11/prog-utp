/*Nombre del Programa: 2M-CASO01
Programador: Luis Ortiz
Fecha de compilacion: 26/05/2021
Version del programa: 01
Descripcion:Entre un numero por pantalla y diga el nombre del mes. [1,12]
 */

#include <stdio.h>

int  main()
{
  int mes;

  printf("Entre el mes del año: ");
  scanf("%d", &mes);

  if (mes>=1 && mes<=12){
    if (mes == 1)
      printf("\nEs enero\n");
    else if (mes == 2)
      printf("\nEs febrero\n");
      else if (mes == 3)
        printf("\nEs marzo\n");
        else if (mes == 4)
          printf("\nEs abril\n");
          else if (mes == 5)
            printf("\nEs mayo\n");
            else if (mes == 6)
              printf("\nEs junio\n");
              else if (mes == 7)
                printf("\nEs julio\n");
                else if (mes == 8)
                  printf("\nEs agosto\n");
                  else if (mes == 9)
                    printf("\nEs septiembre\n");
                    else if (mes == 10)
                      printf("\nEs octubre\n");
                      else if (mes == 11)
                        printf("\nEs noviembre\n");
                          else
                            printf("\nEs diciembre\n");
      }
      else
        printf("\nMes invalido\n");

return 0;
}
