//Nombre del Seudocodigo:velmedia
/* Descripcion:Seudocodigo que calcula la velocidad media de un objeto moviéndose horizontalmente. */
//Programador: Luis Ortiz

#include <stdio.h>        // LIBRERIA PARA ENTRADA Y SALIDA DE DATOS
#define Imprimir printf   //ESTOY SUSTITUYENDO printf por Imprimir
#define Leer scanf
#define flotante float    //SUSTITUYENDO float por flotante

int main(){ //Inicio del Seudocodigo
//ENTRADA
//Declaracion de Variables
flotante distancia, tiempo, velmedia;

//Entrada de datos
Imprimir("Entre la distancia recorrida: ");
Leer("%f", &distancia);

Imprimir("Entre el tiempo transcurrido: ");
Leer("%f", &tiempo);


//PROCESO
//Calcular velocidad media
velmedia = distancia/tiempo;

//SALIDA
Imprimir("\nLa velocidad media es %0.2f \n", velmedia);

return 0;
} //Fin del Seudocodigo
