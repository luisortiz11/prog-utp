/*Nombre del Programa: 3CASO01
Programador: Luis Ortiz
Fecha de compilacion: 26/05/2021
Version del programa: 01
Descripcion:En un almacén se hace un 20% de descuento a los clientes cuya compra supere los 1,000
dólares. ¿Cuál será la cantidad que pagará una persona por su compra?
 */

#include <stdio.h>

int  main()
{
  float compra, descuento, Tpagar;
  printf("Entra el Total de Compra: ");
  scanf("%f", &compra);

  if (compra>1000) {
    descuento = compra*0.20;
    Tpagar = compra - descuento;
    printf("\nTiene un descuento de: %0.2f y su total a pagar es: %0.2f \n", descuento, Tpagar);
  }
  else
    printf("\nNo tiene descuento y su compra a pagar es: %0.2f\n", compra);

return 0;
}
