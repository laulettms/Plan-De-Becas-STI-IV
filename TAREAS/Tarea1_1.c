#include<stdio.h>
/*Ejercicio 1.
Realice un programa que pida al usuario 2 numeros enteros y realice; suma,resta,multiplicacion,division,modulo. Y los muestre en pantalla*/

int main () {
        int num1, num2, suma, resta, multi, mod;     /*declaramos variables*/
        printf("Ingrese el valor 1: \n\t");            /*Pedimos valores y guardamos*/
        scanf("%d",&num1);
        printf("Ingrese el valor 2: \n\t");
        scanf("%d",&num2);

        suma = num1 + num2;                              /*Realizamos la suma*/
        printf("\nLa suma de los numeros es: %d\n",suma);
        resta=num1-num2;                             /*Realizamos la resta*/
        printf("\nLa resta de los numeros es: %d\n",resta);
        multi=num1*num2;                             /*Realizamos multiplicacion*/
        printf("\nLa multiplicacion de los numeros es: %d\n",multi);
        mod=num1%num2;                               /*Realizamos modulo*/
        printf("\nLa mod de los numeros es: %d\n\n",mod);
}
