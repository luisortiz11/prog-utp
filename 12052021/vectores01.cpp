/*Nombre del Programa: vectores01
Programador: Luis Ortiz
Fecha de compilacion: 12/05/2021
Version del programa: 01
Descripcion: vectores de datos cadena de caracteres y reales*/

#include <stdio.h>

int  main()
{
//Vectores tipo caracter
//Calificacion o nota final = 'A' 'B' 'C' 'D' 'F'
//Tienen internamente posicion 0 , 1 , 2 , 3 , 4

//PRACTICA EN CLASE
//Produccion total
//Promedio de la Produccion
int i, suma = 0, Produccion[] = {61,80,75,80,85,90,92};
for (i = 0; i < 7; i++) {
  suma += Produccion[i];
}
printf("Produccion Total: %d\n", suma);
printf("Promedio de la Produccion en la semana: %d\n", suma/7);



//Declaracion de Variables
int num;
static char dia[7][10] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};

//Lectura de las variables
printf("Entre el dia de la semana: ");
scanf("%d", &num);

//PROCESO
if (num>0 && num<8) {
    if(num==1){printf("%s\n", dia[num-1] );}
    else if(num==2){printf("%s\n", dia[num-1]);}
    else if(num==3){printf("%s\n", dia[num-1]);}
    else if(num==4){printf("%s\n", dia[num-1]);}
    else if(num==5){printf("%s\n", dia[num-1]);}
    else if(num==6){printf("%s\n", dia[num-1]);}
    else {printf("%s\n", dia[num-1]);}
}
else
  printf("Dia errado.\n");




return 0;
}
