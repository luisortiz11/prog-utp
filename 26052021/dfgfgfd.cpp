/*Nombre del Programa: 4M-CASO01
Programador: Luis Ortiz
Fecha de compilacion: 26/05/2021
Version del programa: 01
Descripcion: Elabore un algoritmo en donde se encuentre las soluciones de una ecuación cuadrática
𝒂𝒙𝟐 + 𝒃𝒙
+ 𝒄 = 𝟎 por medio de su discriminante :
(d=b² - 4ac)
 */

 #include <stdio.h>
 #include <math.h>

 int  main()
 {

 float a, b, c, d, x1, x2;


 printf("Entre el valor de la a,b,c: ");
 scanf("%f %f %f", &a, &b, &c);

 d = b*b - 4*a*c;

 if (d>0) {
   x1 = (-b + sqrt(d))/(2*a);
   x2 = (-b - sqrt(d))/(2*a);
   printf("\nLas soluciones de la ecuacion son x1 = %f , x2 = %f \n", x1 , x2);
 }
 else if (d=0) {
   x1 = -b/(2*a);
   x2 = x1;
   printf("\n Las soluciones de la ecuacion son x1 = %f, x2 = %f", x1, x2);
 }
 else
  printf("\nLa ecuacion no tiene soluciones reales\n");

 return 0;
 }
