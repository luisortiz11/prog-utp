/*Nombre del Programa:derivada3g
Programador: Luis Ortiz
Fecha de compilacion: 21/04/2021
Version del programa: 01
Descripcion: Calcula de derivada de polinomio de grado */

//DIRECTIVAS DEL COMPILADOR
#include <stdio.h>        // LIBRERIA PARA ENTRADA Y SALIDA DE DATOS
#include <math.h>
#define Imprimir printf   //ESTOY SUSTITUYENDO printf por Imprimir
#define Leer scanf        //Estoy Sustityendo scanf por Leer
#define entero int        //Estoy sustituyendo integer por entero
#define flotante float

//CUERPO PRINCIPAL DEL PROGRAMA
int  main()
{ //Inicio del Algoritmo
//ENTRADA
//Declaracion de Variables
entero a, da;

//Lectura de las variables
Imprimir("Entre el valor de la a: ");
Leer("%d", &a);

//PROCESO
//Polinomio: -2x, -2x+5, 5x^-5 , 5/x^5, 5x^-5 - 3x^-2, -25x^-6 -6x^-3, sqrt(x), sqrt(x)/2
//Derivada: -2 , -2, -25x^-6, -25x^-6, -25x^-6 + 6x^-3, 150x^-7 + 18x^-4, 1/(2*sqrt(x)) , 1/sqrt(x)

da = a*1;

//SALIDA
Imprimir("La derivada de y es igual a %d x^2 + %d x + %d ", da, db, dc);

return 0;
} //Fin del algoritmo
