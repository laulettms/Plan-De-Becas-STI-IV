#include<stdio.h>                                   //incluimos la libreria de entrada y salida
/*15. Hacer un programa que lea tres valores de punto flotante: A, B y C.
Luego calcular:*/
int main(){
float a,b,c,triangulo,cuadrado,rectangulo;                                                                
     printf("\n\t\t\t\tArea\n");                 //Menu para seleccionar el zodiaco
	 printf("\n\t\t1El area del triángulo rectángulo de base A y altura C.");
	 printf("\n\t\t2El area del cuadrado de lado B.");
	 printf("\n\t\t3El area del rectángulo de lados A y B.");                               //Realizamos la seleccion segun su numero
	 printf("\n Escriba el valor de A: ");
	 scanf("%f",&a);
	 printf("\n Escriba el valor de B: ");
	 scanf("%f",&b);
	 printf("\n Escriba el valor de C: ");
	 scanf("%f",&c);
	 triangulo=(a*c)/2;
	 cuadrado= b*b;
	 rectangulo=a*b;
     printf("\nEl area del triangulo rectángulo de base A (%f) y altura C (%f) es: %f",a,c,triangulo);   
     printf("\nEl area del cuadrado de lado B (%f)es: %f",b,cuadrado);      
     printf("\nEl area del rectangulo de lados A (%f) y B (%f) es: %f",a,b,rectangulo);      
}
