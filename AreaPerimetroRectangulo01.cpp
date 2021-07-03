//Nombre del Seudocodigo:AreaPerimetroRectangulo01
/* Descripción:Seudocódigo que calcula el valor del Area y Perimetro de un Rectangulo*/
// perimetro=2*base + 2*altura
//area= base * altura
//Programador: Edson Aparicio, Nadji Corredoira

#include <stdio.h>        // LIBRERIA PARA ENTRADA Y SALIDA DE DATOS     
#define Imprimir printf   //ESTOY SUSTITUYENDO printf por Imprimir
#define flotante float

int main()
{ //Inicio del Seudocodigo
//ENTRADA
//Declaracion de Variables
flotante  base = 1.5;
flotante altura= 3.2;
flotante Area, Perimetro;

//PROCESO
//Calcular Perimetro del Rectangulo
Perimetro = 2*base + 2*altura;  //Perimetro=9.4
//Calcular Area del Rectangulo
Area = base * altura;  //Area=4.8

//SALIDA
//Poner un comodin de %f para indicar la salida de un dato real(flotante)
Imprimir("Perimetro del Rectangulo 2base + 2altura= %.2f", Perimetro);
// Perimetro del Rectangulo 2base + 2altura= 9.4  //En Pantalla

Imprimir("\n Area del Rectangulo base * altura= %.3f",Area);
//Area del Rectangulo base * altura= 4.8   //En Pantalla

return 0;
} //Fin del Seudocodigo


