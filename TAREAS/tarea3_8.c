#include<stdio.h>                                   //incluimos la libreria de entrada y salida
/*Ejercicio 23.
Triángulos. Laura, Daniela y Diana estaban haciendo su trabajo para geometría y tenían
que hacer unos triángulos, pronto se dieron cuenta que si tenían 4 varillas de
distintos tamaños había algunas veces que no se podían hacer los triángulos.
Haz un programa que dados 4 números , que representan la longitud de las
varillas. Decir si es posible hacer un triángulo. Recuerda que todo triángulo
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
