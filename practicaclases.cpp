//Nombre del Seudocodigo:AreaPerimetroRectangulo01
/* Descripci�n:Seudoc�digo que calcula el valor del Area y Perimetro de un Rectangulo*/
// perimetro=2*base + 2*altura
//area= base * altura
//Programador: Edson Aparicio, Nadji Corredoira
#include <stdio.h>
#define Imprimir printf
#define flotante float

int main() {
  flotante base;
  flotante altura;
  flotante area;

  base = 1.2;
  altura = 2;


  //PROCESO
  //Calcular Area del Rectangulo
  area = base*altura;

  Imprimir("\n Area del Rectangulo base * altura= %f \n", &area);

  return 0;
}
