#include<stdio.h>                                   //incluimos la libreria de entrada y salida
/*Ejercicio 18.
Lea dos números e imprimir la suma desde el número menor hasta el
número mayor. Ej. Si se introducen 5 y 1, imprimir: 1 2 3 4 5 La suma es
15*/
int main(){
int num1,num2,i;
int suma=0;

  printf("Escribe numero inferior: ");
  scanf("%d",&num1);
  printf("Escribe numero superior: ");
  scanf("%d",&num2);

   for(i=num1; i<=num2; i++){
   printf("La secuencia es: %d\n",i);
   suma+=i;}
   printf("la Suma es: %d",suma);	
}	
