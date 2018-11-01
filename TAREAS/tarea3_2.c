#include<stdio.h>                                   //incluimos la libreria de entrada y salida
/*Ejercicio 17.
Debes de leer un programa que lea un número de punto flotante y
decir si pertenece al intervalo [0,20],(20,40],(40,60],(60,80],(80,100]. Sí el número
es menor a cero o mayor que 100 decir que “Esta fuera del intervalo”. Usar
sentencias if*/
int main(){
float n;
  printf("\n\t\t\tIntervalos\n");
  printf("\nIntervalos posibles: [0,20],(20,40],(40,60],(60,80],(80,100] \n");
  printf("\nEscriba un numero para saber a que intervalo pertenece\n");
  scanf ("%f",&n);
 if (n>=0 && n<=20.0)
  printf("El pertenece al intervalo [0,20]");
        else if (n>20 && n<=40)
        printf("El pertenece al intervalo (20,40]");
           else if (n>40 && n<=60)
            printf("El pertenece al intervalo (40,60]");
                else if (n>60 && n<=80)
                printf("El pertenece al intervalo (60,80]");
                      else if(n>80 && n<=100)
                      printf("El pertenece al intervalo (80,100]");
                            else 
                            printf("Esta fuera del intervalo\n");}
