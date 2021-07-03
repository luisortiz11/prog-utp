/*Nombre del Programa:cuadratica
Programador: Luis Ortiz
Fecha de compilacion: 28/04/2021
Version del programa: 01

Descripcion: Quimica,
Volumen a partir de la Ley de Avogadro con temperatura y presion constante
n1/V1 = n2/V2
V2 = n2*V1/n1
V2 = (n2/n1)*V1
*/

#include <stdio.h>

int  main()
{
//Declaracion de Variables
float n1, n2, v1, v2;

//Lectura de las variables
printf("Entre el valor de los moles (n1): ");
scanf("%f", &n1);

printf("Entre el valor de los moles (n2): ");
scanf("%f", &n2);

printf("Entre el valor del volumen (v1): ");
scanf("%f", &v1);

//PROCESO
v2 = (n2/n1)*v1;

printf("\nEl volumen resultante es %0.4f \n", v2);

return 0;
}
