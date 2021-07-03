//Nombre del Seudocodigo:areatriangulo
/* Descripcion:Seudocodigo que calcula el area de un triangulo*/
// area = base * altura /2
//Programador: Luis Ortiz

#include <stdio.h>
#define Imprimir printf
#define Leer scanf
#define flotante float

int main() {
  //Declaracion de variables
  flotante base;
  flotante altura;
  flotante area;

  //Entrada de datos
  Imprimir("Entre el valor de la base: ");
  Leer("%f", &base);

  Imprimir("Entre el valor de la altura: ");
  Leer("%f", &altura);

  //Calcular Area del triangulo
  area = base*altura/2;

  //Salida
  Imprimir("Area del triangulo = %0.2f \n", area);

  return 0;
}
 //Fin del Seudocodigo
