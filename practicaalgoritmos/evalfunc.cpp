//Nombre del Seudocodigo:evalfunc
/* Descripcion:Seudocodigo que calcule el valor de “y” dado cualquier valor en “x” entero positivo mayor o igual a cero para la ecuación: y=〖3x〗^2+〖2x〗^ +1 */
//Programador: Luis Ortiz

#include <stdio.h>        // LIBRERIA PARA ENTRADA Y SALIDA DE DATOS
#define Imprimir printf   //ESTOY SUSTITUYENDO printf por Imprimir
#define Leer scanf
#define flotante float    //SUSTITUYENDO float por flotante

int main(){ //Inicio del Seudocodigo
//ENTRADA
//Declaracion de Variables
int x,y;

//Entrada de datos
Imprimir("Entre el valor de x entero positivo mayor o igual a cero: ");
Leer("%d", &x);

if (x>=0)
{
  y = 3*x*x + 2*x + 1;
  Imprimir("El valor de y es: %d \n", y );
}
else
{
  Imprimir("El valor de x debe ser entero positivo mayor o igual a cero ");
}

return 0;
} //Fin del Seudocodigo
