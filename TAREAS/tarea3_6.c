#include<stdio.h>                                   //incluimos la libreria de entrada y salida
/*Ejercicio 21.
Haga un programa que lea una cantidad indeterminada de números de
datos, cada dato que se ingrese sea una edad de una persona. El último dato
no debe de entrar en las operaciones a calcular, debe de ser un valor negativo.
Calcular e imprimir el promedio de años de este grupo de individuos.*/
int main(){
int num,contador=0,suma=1;
float promedio;
 
  printf("\n\t\t\t\tEdades\n");
  printf("\nEscribe las edades de un grupo de personas y te dire el promedio"); 
  printf("\n***Indicaciones: El resultado lo obtendras hasta que coloques un numero nevativo. Si colocas un numero negativo se acaba el programa***");	
      
     do{
     	printf("\n\nEscribe la edad de la persona: ");
        scanf("%d",&num);
        suma+=num;
	    contador++;
	    //printf("contador: %d", contador);
     	
	 }while(num>0);
     
     printf("Suma %d\n",suma);
	 promedio=suma/(contador-1);
	 printf("promedio es: %f",promedio);
    
}
