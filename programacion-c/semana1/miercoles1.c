#include<stdio.h> //Esto es un cometario
/*Programa que pide dos numeros*/

int main(){  /*
esto es un cometario
de varias lineas*/

int numero,numero2,resultado;

printf("ingrese valor 1: \n");
scanf("%d",&numero);            //El primer numero en ingresarse se queda aqui
printf("Su valor es: %d\n",numero);

printf("\ningrese valor 2: \n");
scanf("%d",&numero2);           //El segundo numero en ingresarse se queda aqui
printf("Su valor es: %d\n",numero2);

resultado=numero+numero2;
printf("\nLa suma de los numeros es: %d\n",resultado);

resultado=numero-numero2;
printf("\nLa resta de los numeros es : %d\n",resultado);

resultado=numero*numero2;
printf("\nLa multiplicacion  de los numeros es : %d\n",resultado);

if (numero>numero2){
  printf("\n");
  printf("\nEl primer numero es mayor que el segundo\n");
}









}
