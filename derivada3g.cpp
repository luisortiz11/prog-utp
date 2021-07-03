/*
Programador: Luis Ortiz
Descripcion: Calcula de derivada de polinomio de grado tres ax3 + bx2 + cx + d */

#include <stdio.h>

int  main()
{
float a, b, c, d, da, db;

printf("Entre el valor de los coeficientes a, b, c, d: ");
scanf("%f %f %f %f", &a, &b, &c, &d);

da = a*3;
db = b*2;

printf("\nf(x) = %0.2f x^3 + %0.2f x^2 + %0.2f x + %0.2f \nf'(x) = %0.2f x^2 + %0.2f x + %0.2f \n", a, b, c, d, da, db, c);

return 0;
}
