#include<stdio.h>                                   //incluimos la libreria de entrada y salida
/*Ejercicio 3.
Con los signos del zodiaco y su numeración.
1. Muestre el listado de los signos del zodiaco, con sus números asociados.
2. Pida por teclado un número (entero) asociado a un signo del zodiaco.
3. Muestre la categoría a la que pertenece el signo del zodíaco seleccionado.*/
int main(){
int num;                                                                
     printf("\n\t\t\t\tZodiaco\n");                 //Menu para seleccionar el zodiaco
	 printf("\n\t\t\tLista\n");
	 printf("\n\t\tSigno y valor asociado");
	 printf("\n\t\t1-------------Aries");
	 printf("\n\t\t2-------------Tauro");
	 printf("\n\t\t3-------------Geminis");
	 printf("\n\t\t4-------------Cancer");
     printf("\n\t\t5-------------Leo");
     printf("\n\t\t6-------------Virgo");
     printf("\n\t\t7-------------Libra");
     printf("\n\t\t8-------------Escorpio");
     printf("\n\t\t9-------------Sagitario");
     printf("\n\t\t10------------Capricornio");
     printf("\n\t\t11------------Acuario");
     printf("\n\t\t12------------Piscis");
     printf("\n\nSeleccione un numero para decir a que categoria pertenece: ");   //Solicitamos un numero asociado para ver su categoria
     scanf("%d",&num);                               //Realizamos la seleccion segun su numero
     if (num==1 || num==5 || num==9)
     printf("El pertenece a la categoria Fuego");
        else if (num==2 || num==6 || num==10)
        printf("El pertenece a la categoria Tierra");
            else if (num==3 || num==7 || num==11)
            printf("El pertenece a la categoria Aire");
                else if (num==4 || num==8 || num==12)
                printf("El pertenece a la categoria Agua");
                else 
                printf("\nNumero incorrecto. Vuelva a intentarlo");
}
