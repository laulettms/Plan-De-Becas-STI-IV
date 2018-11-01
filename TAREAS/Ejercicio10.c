#include <stdio.h>
#include <stdlib.h>

/*Programa que realiza una calculadora que debe de recibir dos numeros tipo float y un caracter para decidir que
operacion se quiere hacer. Se le bede de mostrar al usuario un menúopciones para realizar la opcióActo seguido el usuario ingresa los numeros y el programa devuelve el resultado.   */

int main(int argc, char *argv[]) {
float a,b,suma,res,mult,div;
char letra;

printf("\n\t\t\t\tCalculadora\n");
printf("\nElige una opcion del menu presiona la letra de la opcion que deseas elegir\n");
printf("\nMenu\n");
printf("\nSuma--------------------- (s)\n");
printf("\nResta-------------------- (r)\n");
printf("\nMultiplicacion----------- (m)\n");
printf("\nDivision----------------- (d)\n");

printf("\nEscribe la letra que seleccionaste: \n");
scanf(" %c",&letra);
switch(letra){

        case 's':
        printf("\nSeleccionaste Suma opcion %c\n",letra);
        printf("Digita dos numeros");
        printf("el primer numero es: \n");
        scanf("%f",&a);
        printf("el segundo numero es: \n");
        scanf("%f",&b);
        suma=a+b;
        printf("el resulatado es: %f\n",suma);
        break;
        case 'r':
        printf("\nSeleccionaste Resta opcion %c\n",letra);
        printf("Digita dos numeros");
        printf("el primer numero es: \n");
        scanf("%f",&a);
        printf("el segundo numero es: \n");
}}
