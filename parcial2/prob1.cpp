/*Nombre del Programa:Parcial2_problema1.cpp
Programador: Luis Ortiz
Fecha de compilacion: 19/06/2021
Version del programa: 0
Descripcion: La Universidad Tecnológica de Panamá tiene elecciones en la Facultad de Ingeniería Eléctrica.
Solamente hay postulados dos candidatos y se espera una población de votantes de 500 entre docentes, administrativos y estudiantes.
Se desea elaborar un programa que simule las elecciones y que realice lo siguiente:
a.	Elaborar un menú con las siguientes opciones
1.	Candidato uno
2.	Candidato dos
3.	Voto nulo
9.	Salir
Nota:  Computar solamente un voto por cada vez que viene un votante y emite su voto.
b.	Emitir el Resultado de acuerdo al  siguiente reporte por pantalla:
o	 Totales de votos por candidatos.
o	Totales de votos nulos
o	Decir cuál fue el candidato ganador
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

float Suma(int, int);

int  main()
{
  int opcion, c1 = 0, c2 = 0, vn= 0;

  while (opcion != 4){
    system("cls");
    printf("\n ************************************** \n");
    printf(" *             MENU                   * \n");
    printf(" *                                    * \n");
    printf(" *       1. Candidato 1               * \n");
    printf(" *       2. Candidato 2               * \n");
    printf(" *       3. Voto nulo                 * \n");
    printf(" *                                    * \n");
    printf(" *       4. Mostrar resultados        * \n");
    printf(" ************************************** \n");
    printf("\nEntre el numero de la opcion (1-4): ");
    scanf("%d", &opcion);

    system("cls");
    switch (opcion) {
      case 1: printf("\nHa votado por el candidato 1 \n");
      c1++;
      system("pause");
      break;

      case 2: printf("\nHa votado por el candidato 2 \n");
      c2++;
      system("pause");
      break;

      case 3: printf("\nVoto nulo\n");
      vn++;
      system("pause");
      break;

      case 4:
      printf("Votos de candidato 1: %d \n", c1);
      printf("Votos de candidato 2: %d \n", c2);
      printf("\nTotal de votos nulos: %d \n", vn);
      if(c2<c1)
        printf("\nGanador: Candidato 1 \n");
      else if(c2>c1)
        printf("\nGanador: Candidato 2 \n");
      else
        printf("\nEmpate\n");
      break;

      default: printf("\nOpcion invalida\n");
      system("pause");
    }
  }


return 0;
}
