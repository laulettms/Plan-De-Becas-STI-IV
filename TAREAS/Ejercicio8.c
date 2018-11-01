#include<stdio.h>
/*Programa que solicita 4 numeros y  dice que numero es mayor entre 4 numeros*/
int main (){
int num1, num2, num3, num4;
printf("\nIngresa cuatro numeros y te dire cual es el mayor\n");

printf("\nIngrese un numero1 entero \n");    //Pedimos un numero1 entero
        scanf("%d",&num1);
printf("Ingrese un numero2 entero \n");    //Pedimos un numero2 entero
        scanf("%d",&num2);
printf("Ingrese un numero3 entero \n");    //Pedimos un numero3 entero
        scanf("%d",&num3);
printf("Ingrese un numero4 entero \n");    //Pedimos un numero4 entero
        scanf("%d",&num4);


if (num1> num2 && num1 > num3 && num1 > num4)
printf("El %d es el mayor\n",num1);
else if(num2> num1 && num2 > num3 && num2 > num4)
printf("El %d es el mayor\n",num2);
else if (num3> num2 && num3 > num1 && num3 > num4)
printf("El %d es el mayor\n",num3);
else if (num4> num2 && num4 > num1 && num4 > num3)
printf("El %d es el mayor\n\n",num4);

}


