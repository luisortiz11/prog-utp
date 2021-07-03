//Nombre del Seudocodigo:pendienterecta2p
/* Descripcion:Seudocodigo que calcula la pendiente de la recta que pasa por (6,9) y (7,1)*/
//Programador: Luis Ortiz

#include <stdio.h>        // LIBRERIA PARA ENTRADA Y SALIDA DE DATOS
#define Imprimir printf   //ESTOY SUSTITUYENDO printf por Imprimir
#define flotante float    //SUSTITUYENDO float por flotante

int main(){ //Inicio del Seudocodigo
//ENTRADA
//Declaracion de Variables
int x1 = 6;
int y1 = 9;
int x2= 7;
int y2= 1;
flotante pendiente;

//PROCESO
//Calcular pendiente de la recta
pendiente = (y2-y1)/(x2-x1);

//SALIDA
Imprimir("\nLa pendiente de la recta que pasa por (%d,%d) y (%d,%d) es %0.2f \n", x1,y1,x2,y2,pendiente);

return 0;
} //Fin del Seudocodigo
