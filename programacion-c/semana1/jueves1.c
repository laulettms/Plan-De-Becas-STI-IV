#include<stdio.h>
/*Programa que te diga si es consonante o vocal*/

int main(){
char letra;

printf("Ingrese una vocal o caracter \n");    
scanf(" %c",&letra);

if(letra=='a'|| letra=='e'|| letra=='i'|| letra=='o'|| letra=='u')
printf("La letra es una vocal\n",letra);
else 
printf("La letra es una consonante\n");



}

