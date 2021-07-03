//Nombre del Seudocodigo:rapimedia
/* Descripcion: Si un coche recorre 150 km en 3 horas, su rapidez media es:*/
//Programador: Luis Ortiz

#include <stdio.h>        // LIBRERIA PARA ENTRADA Y SALIDA DE DATOS
#define Imprimir printf   //ESTOY SUSTITUYENDO printf por Imprimir
#define flotante float    //SUSTITUYENDO float por flotante

int main(){ //Inicio del Seudocodigo
//ENTRADA
//Declaracion de Variables
flotante dist = 150; //150 km recorridos
flotante tiempo= 3; //3 horas
flotante rapimed;

//PROCESO
//Calcular rapidez media
rapimed = dist / tiempo;  //Unidad: km/h

//SALIDA
Imprimir("La rapidez media es = %0.2f \n ", rapimed);

return 0;
} //Fin del Seudocodigo
