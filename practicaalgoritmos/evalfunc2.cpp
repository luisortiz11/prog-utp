//Nombre del Seudocodigo:evalfunc
/* Descripcion:Seudocodigo que calcule 	Calcule el valor de “y” dado cualquier valor en “x” entero positivo
Para la siguiente ecuación: ax^3+〖bx〗^2+〖cx〗^ +d */
//Programador: Luis Ortiz

#include <stdio.h>        // LIBRERIA PARA ENTRADA Y SALIDA DE DATOS
#define Imprimir printf   //ESTOY SUSTITUYENDO printf por Imprimir
#define Leer scanf
#define flotante float    //SUSTITUYENDO float por flotante

int main(){ //Inicio del Seudocodigo
//ENTRADA
//Declaracion de Variables
flotante a = 1,b = 2,c = 3,d = 4;
int x;
flotante y;

//Entrada de datos
Imprimir("Entre el valor de x entero positivo mayor o igual a cero: ");
Leer("%d", &x);

if (x>=0)
{
  y = a*x*x + b*x*x+ c*x + d;
  Imprimir("El valor de y es: %0.2f \n", y );
}
else
{
  Imprimir("El valor de x debe ser entero positivo mayor o igual a cero ");
}

return 0;
} //Fin del Seudocodigo
