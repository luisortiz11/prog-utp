//Nombre del Seudocodigo:prom3notas
/* Descripcion:Seudocodigo que calcula nota promedio de tres parciales*/
//Programador: Luis Ortiz

#include <stdio.h>        // LIBRERIA PARA ENTRADA Y SALIDA DE DATOS
#define Imprimir printf   //ESTOY SUSTITUYENDO printf por Imprimir
#define flotante float    //SUSTITUYENDO float por flotante

int main(){ //Inicio del Seudocodigo
//ENTRADA
//Declaracion de Variables
flotante nota1 = 80;
flotante nota2 = 75;
flotante nota3 = 94;
flotante prom;

//PROCESO
//Calcular promedio
prom = (nota1+nota2+nota3)/3;

//SALIDA
Imprimir("\nEl promedio de los parciales = %0.2f \n", prom);

return 0;
} //Fin del Seudocodigo
