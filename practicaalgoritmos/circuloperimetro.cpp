//Nombre del Seudocodigo:circuloperimetro
/* Descripcion:Seudocodigo que calcula el perimetro de un circulo*/
// perimetro = 2 * pi * r
//Programador: Luis Ortiz

#include <stdio.h>        // LIBRERIA PARA ENTRADA Y SALIDA DE DATOS
#define Imprimir printf   //ESTOY SUSTITUYENDO printf por Imprimir
#define Leer scanf        //ESTOY SUSTITUYENDO scanf por Leer
#define flotante float    //ESTOY SUSTITUYENDO float por flotante

int main()
{ //Inicio del Seudocodigo

//Declaracion de Variables
flotante radio;
flotante pi = 3.141592;
flotante perimetro;

//ENTRADA DE DATOS
Imprimir("Entre el valor del radio del circulo: ");
Leer("%f", &radio);

//PROCESO
//Calcular Perimetro del circulo
perimetro = 2*pi*radio;

//SALIDA

Imprimir("Perimetro del circulo de radio %f = %.2f \n", radio, perimetro);

return 0;
} //Fin del Seudocodigo
