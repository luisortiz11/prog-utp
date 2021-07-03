//Nombre del Seudocodigo:SumaDosEnteros02
//Programador: Jaime Pérez y Gabriel Ortiz
/*Descripcion: Este programa calculara la suma de dos números 
enteros asignados en la declaracion de variables */
#include <stdio.h>        // LIBRERIA PARA ENTRADA Y SALIDA DE DATOS
#define Imprimir printf   //ESTOY SUSTITUYENDO printf por Imprimir
#define Leer scanf        //Estoy Sustityendo scanf por Leer
#define entero int        //Estoy sustituyendo integer por entero

int  main()
{ //Inicio del Seudocodigo
//ENTRADA
//Declaracion de Variables
entero Num1=4;
entero Num2=5;
entero Num;

//PROCESO
//Calcular la Suma de x, y
Num =Num1 + Num2;

//SALIDA poner comodin de % y su tipo de dato
//Si es entero se pone %d
//Si es flotante se pone %f
Imprimir("La suma de Num1 + Num2 = %d",Num);
//La suma de x+y=9  //Es lo que sale en la pantalla
return 0;
} //Fin del seudocodigo



