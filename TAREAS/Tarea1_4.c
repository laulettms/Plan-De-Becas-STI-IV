#include<stdio.h>      //libreria para entrada y salida
/*Ejercicio 4.
Realice un programa que pida al usuario 2 numeros y determine cual de ellos es el mayor (debe utilizar una instruccion if)*/
int main(){
	int num1,num2;     //Declara variables
	printf("Ingrese el valor 1: \n");
	scanf("%d",&num1);
	printf("Ingrese el valor 2: \n");
	scanf("%d",&num2);
	 
	if(num1>num2)      //Hace la comparracion
	printf("el numero mayor es: %d\n",num1);
	else
	printf("el numero mayor es: %d\n",num2);
}
