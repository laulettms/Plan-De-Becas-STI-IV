#include<stdio.h>                           //Libreria para entrada y salida
#include<math.h>                            //libreria para que incluya la funcion sqrt
/*Ejercicio 1.
Hacer un programa que resuelva ecuaciones de segundo grado usando
la formula general. Recuerda que 2a!=0 y (bˆ2-4ac)>=0 para efectos
prácticos.*/

int main () {
	int a, b, c;
	float x1,x2,r;                           //Declaramos las variables
	 printf("\n\t\t\t\tEcuacion cuadratica\n");
	 printf("\nResolucion de ecuaciones de segundo grado por medio de la formula general \n");
	 printf("Condicion: El valor de a debe ser diferente de 0 \n");
	 printf("\n\nIngrese el valor de a: \n");
	 scanf("%d",&a);                         //Solicitamos los valores
	 printf("Ingrese el valor de b: \n");
	 scanf("%d",&b);
	 printf("Ingrese el valor de c: \n");
	 scanf("%d",&c);
	 r=sqrt((b*b)-(4*a*c));                 //Realizamos la raiz cuadrada y la guardamos en una variable    
	  if(a!=0 && r>=0){                     //Colocamos las condiciones para que no exitan errores
	    x1=(-b+(r))/(2*a);                  //Realizamos las operaciones para los valores + y -
	    x2=(-b-(r))/(2*a);             
	    printf("\nEl resultado");           
	    printf("\nX1: %f",x1);              //Resultado de x1 la primer raiz
	    printf("\nX2: %f",x2);              //Resultado de x2 la segunda raiz
		}
		else 
		printf("\nValores no validos. Vuleve a colocar los valores \n");       //En caso de error solicitamos nuevos valores
}
