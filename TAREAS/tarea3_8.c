#include<stdio.h>                                   //incluimos la libreria de entrada y salida
/*Ejercicio 23.
Tri�ngulos. Laura, Daniela y Diana estaban haciendo su trabajo para geometr�a y ten�an
que hacer unos tri�ngulos, pronto se dieron cuenta que si ten�an 4 varillas de
distintos tama�os hab�a algunas veces que no se pod�an hacer los tri�ngulos.
Haz un programa que dados 4 n�meros , que representan la longitud de las
varillas. Decir si es posible hacer un tri�ngulo. Recuerda que todo tri�ngulo
cada uno de sus lados cumple con a > b-c y a < b+c*/
int main(){
float a,b,c,d;

  printf("La longitud de la varilla 1 es  : ");
  scanf("%f",&a);
  printf("La longitud de la varilla 2 es  : ");
  scanf("%f",&b);
  printf("La longitud de la varilla 3 es  : ");
  scanf("%f",&c);
  printf("Las longitudes son: %f, %f, %f",a,b,c);
      if (a>(b-c)&&a<(b+c))
	   printf("\nSe puede construir un triangulo");
	   else
	   printf("\nNo se puede hacer un triangulo");
}
