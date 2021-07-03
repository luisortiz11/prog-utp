//Nombre del Seudocodigo:rapimedia
/* Descripcion: Calcular la velocidad de un objeto en m/s*/
//Programador: Luis Ortiz

#include <stdio.h>        // LIBRERIA PARA ENTRADA Y SALIDA DE DATOS
#define Imprimir printf   //ESTOY SUSTITUYENDO printf por Imprimir
#define flotante float    //SUSTITUYENDO float por flotante

int main(){ //Inicio del Seudocodigo
//ENTRADA
//Declaracion de Variables
flotante metros = 13;
flotante segundos = 2;
flotante vel;

//PROCESO
//Calcular velocidad
vel = metros / segundos;  //Unidad: m/s

//SALIDA
Imprimir("La velocidad es = %0.2f \n ", vel);

return 0;
} //Fin del Seudocodigo
