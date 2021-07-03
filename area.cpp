#include <stdio.h>
#define Imprimir printf
#define flotante float

int main() {
  flotante diag1 = 4;
  flotante diag2 = 2;
  flotante area;

  //Calcular Area del rombo
  area = diag1*diag2/2;

  Imprimir("Area del rombo = %0.3f \n", area);

  return 0;
}
