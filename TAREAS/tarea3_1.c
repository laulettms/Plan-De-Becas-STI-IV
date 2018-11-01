#include<stdio.h>                                     //incluimos la libreria de entrada y salida
#include <string.h>                                   //incluimos la libreria para manejar cadenas
/*Ejercicioc16.
Te enuentras en la tienda de Don Toño. Usa la siguiente tabla para hacer
el programa, debes de escribir un programa que de la bienvenida al usuario de
comprar en la tienda de Don Toño y que lea el código y la cantidad del producto.
Acto seguido debe de imprimir el valor a pagar y darle las gracias al usuario por
haber comprado en Don Toño.
*/
int main(){
char a[]="";
int longitud;
float choco,num,coca,yum,huevo,emacs,leche,im,tacos,numero;                                                                
     printf("\n\t\t\t\tTienda Don Toño\n");                 //Lista de la Tienda
	 printf("\n\t\tBienvenido a la tienda de don Toño");
	 printf("\n\tQue producto quiere comprar de la siguente lista: ");
	 printf("\n\t\t\tLista\n");
	 printf("\n\t--------------------------------------");
	 printf("\n\tCodigo------Nombre-------------Precio");
	 printf("\n\tW3m---------Chocotorro---------$12.50");
	 printf("\n\tyum---------Coca-cola----------$15.50");
     printf("\n\temacs-------Huevo--------------$20.00");
     printf("\n\ti3m---------Leche--------------$23.75");
     printf("\n\t7-----------Tacos de Cansasta--$25.00");
     
	 printf("\n\nEl codigo del producto es: ");            //Solicitamos el código del producto y que lo guarde en una cadena
	 scanf("%s",&a);
	// printf("Su codigo es: %s\n",a);
	 longitud = strlen(a);                                 //Se calcula la longitud de la cadena 
	//printf("la long es: %i",longitud);
	 
      if (longitud==3 && (a[0]=='w'|| a[0]=='W' )){       //Colocamos las condiciones para que haga el calculo de los precios 
	  printf("\n\nLa cantidad de productos es : ");
	  scanf("%f",&num);
	  choco=(num*12.50);
	  printf("El total a pagar de Chocotorros es: %f\n",choco);
	  printf("Su codigo es: %s\n",a);}
     
      else if (longitud ==3 && a[0]=='y'){                //Colocamos las condiciones para que haga el calculo de los precios 
	  printf("\n\nLa cantidad de productos es : ");
	  scanf("%f",&yum);
	  coca= yum*15.50;
	  printf("Total a pagar de Coca-Cola es: %f\n",coca);
	  printf("Su codigo es: %s\n",a);}
     
      else if (longitud ==5 && a[0]=='e'){               //Colocamos las condiciones para que haga el calculo de los precios 
	  printf("\n\nLa cantidad de productos es : ");
	  scanf("%f",&emacs);
	  huevo=(emacs*20.00);
	  printf("Total a pagar de huevo es: %f\n",huevo);
	  printf("Su codigo es: %s\n",a);}
	 
	 else if (longitud ==3 && a[0]=='i'){               //Colocamos las condiciones para que haga el calculo de los precios 
	  printf("\n\nLa cantidad de productos es : ");
	  scanf("%f",&im);
	  leche=(im*23.75);
	  printf("Total a pagar de leche es: %f\n",leche);
	  printf("Su codigo es: %s\n",a);}
	 
	 else if (longitud ==1 ){                          //Colocamos las condiciones para que haga el calculo de los precios 
	  printf("\n\nLa cantidad de productos es : ");
	  scanf("%f",&numero);
	  tacos=(numero*25.00);
	  printf("Total a pagar de tacos es: %f\n",tacos);
	  printf("Su codigo es: %s\n",a);}
 }
