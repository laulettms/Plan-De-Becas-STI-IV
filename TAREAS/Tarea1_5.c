#include<stdio.h>                  //Libreria 
/*Ejercicio 5.
Realice un programa que pida al usuario un entero,un float,un char y los muestre posteriormente
NOTA:
para leeer un caracter use  scanf(" %c",&variable);
IMPORTANTE el espacio en blanco antes del % es necesario */
int main (){
	int entero;                    //Declaramos variables
	float flotante;
	char caracter;
	printf("Ingrese un numero entero \n");    //Pedimos un numero entero
	scanf("%d",&entero);
	printf("Su un numero entero es: %d \n", entero);
	printf("\nIngrese un numero decimal \n"); //Pedimos un numero decinal
	scanf("%f",&flotante);
	printf("Su un numero float es: %f \n", flotante);
        printf("\nIngrese un caracter  \n");      //Pedimos un caracter
	scanf(" %c",&caracter);
	printf("Su caracter es: %c \n", caracter);
}
