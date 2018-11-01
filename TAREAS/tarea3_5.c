#include<stdio.h>                                   //incluimos la libreria de entrada y salida
/*Ejercicio 20.
Hacer un programa que calcule el factorial de un número. Escribe un
algoritmo que lea un entero mayor que cero pero menor a 13 y que calcule su
correspondiente factorial. Factorial de N = N*(N-1)*(N-2)*(N-3)*...*1*/
int main(){
int num,contador=1,multi=1;
 
  printf("\n\t\t\t\tFactorial\n");
  printf("\nEscribe un numero para obtener su factorial\n"); 
  printf("\nRestricciones: El numero no debe ser mayor o igual a 13");	
  printf("\nEscribe un numero: ");
  scanf("%d",&num);
  printf("Tu numero es: %d\n\n",num);
      
   if(num>=1 && num<13){
     while(contador<=num){
     printf("Tu secuencia es: %d\n", contador);
     printf("Factorial %d\n",multi);
     contador++;
     multi*=contador;}}
    else
     printf("Numero no valido");
}
