#include <stdio.h>
#include <stdlib.h>

/*Programa que te dice si es una vocal o consonante por medio de un switch*/

int main(int argc, char *argv[]) {
char letra;

printf("\nPrograma que dice si es una letra o vocal\n");
printf("Escribe una letra\n");
scanf(" %c",&letra);
switch(letra){

	case 'a': 
	printf("\nTu letra es la vocal %c\n\n",letra);
	break;
	case 'e': 
	printf("\nTu letra es la vocal %c\n\n",letra);
	break;
	case 'i':
	printf("\nTu letra es la vocal %c\n\n",letra);
	break;
	case 'o':
	printf("\nTu letra es la vocal %c\n\n",letra);
	break;
	case 'u':
	printf("\nTu letra es la vocal %c\n\n",letra);	
	default:
	printf("\nTu letra es una consonante %c\n\n",letra);	
}}
