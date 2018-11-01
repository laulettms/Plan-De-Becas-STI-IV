#include<stdio.h>                                   //incluimos la libreria de entrada y salida
/*Ejercicio 19.
Hacer un programa que haga la secuencia de fibonacci. Escribe un
algoritmo que lea un entero menor a 46 y que imprima los n numeros de la
secuencia de fibonacci.*/
int main(){
int i, n, num=1, numero=1,f=1;

   printf("\n\t\tSerie de Fibonacci\n");
   printf("Escribe un numero para empezar la serie: ");
   scanf("%d",&n);
       for(i=2; i<=n; i++){
       printf("%d",f);	
       f=num+numero;
       num=numero;
       numero=f;	
}}
