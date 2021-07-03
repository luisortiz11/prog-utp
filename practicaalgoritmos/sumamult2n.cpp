//Nombre del Seudocodigo:SumaMult
/* Descripcion:Seudocodigo que suma y multiplica dos números*/
//Programador: Luis Ortiz

#include <stdio.h>        // LIBRERIA PARA ENTRADA Y SALIDA DE DATOS
#define Imprimir printf   //ESTOY SUSTITUYENDO printf por Imprimir
#define flotante float    //SUSTITUYENDO float por flotante

int main(){ //Inicio del Seudocodigo
//ENTRADA
//Declaracion de Variables
flotante num1 = 1.5;
flotante num2= 3.2;
flotante suma, mult;

//PROCESO
//Calcular Suma
suma = num1 + num2;  //Suma = 4.7
//Calcular multiplicacion
mult = num1 * num2;  //Multiplicacion = 4.8

//SALIDA
Imprimir("La suma de %f+%f= %0.2f ", num1, num2, suma);
Imprimir("\nLa multiplicacion de %f*%f= %0.2f \n", num1, num2, mult);

return 0;
} //Fin del Seudocodigo
