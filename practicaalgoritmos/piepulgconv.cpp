//Nombre del Seudocodigo:piepulgconv
/* Descripcion:Seudocodigo que convierte un valor dado en pies a pulgadas.*/
//Programador: Luis Ortiz

#include <stdio.h>        // LIBRERIA PARA ENTRADA Y SALIDA DE DATOS
#define Imprimir printf   //ESTOY SUSTITUYENDO printf por Imprimir
#define flotante float    //SUSTITUYENDO float por flotante

int main(){ //Inicio del Seudocodigo
//ENTRADA
//Declaracion de Variables
flotante pies = 1.5;
flotante pulg;

//PROCESO
//Calcular conversion, factor 1 pie = 12 pulg
pulg = 12*pies;

//SALIDA
Imprimir("La conversion de %0.2f pies es %0.2f pulgadas \n ", pies, pulg);

return 0;
} //Fin del Seudocodigo
