//Integrantes: Laura Martinez Sierra e Ixchel Gabriela Sanchez Hernandez
#include<stdio.h>                                     //Libreria de entrada y salida
#include <string.h>                                   //Libreria para manejar cadenas
int main(){
int num;                                              //Declaramos variables
char rango,rot[100],userrot[50],cesar[100], userce[50];
int i=0,mov;
do{                                                   //Ciclo do-while para que si el usuario ingresa un numero diferente de 1 o 2     
     printf("\n\t\t\t\t***Cifrado***\n");             //regrese el menu
     printf("\n\tPrograma que cifra tu contrasena con cifrado ROT13 o cifrado Cesar.\n");
     printf("\n\tPara tener una contasena segura se muestran dos cifrados que consisten en sustitucion.\n");
	 printf("\n\tPosibles cifrados: \n");             //Menu    
	 printf("\t**************************\n");
	 printf("\t1...............ROT13\n");
	 printf("\n");
	 printf("\t2...............Cesar\n");
	 printf("\t**************************\n");
	 printf("\n");
	 printf("\n\tSeleccione el cifrado: ");
	 scanf("%i",&num);
	 system("cls");
	 switch(num){                                     //Switch para eleccion engtre cifrados 
	 	case 1:
            printf("\n\t\t\t\t**Cifrado ROT13**\n");  //Cifrado ROT13
            printf("\n\tEl cifrado ROT13 sustituye cada letra por una letra del alfabeto 13 posociones adelante");
            printf("\n\tEjemplo: la letra 'a' la sustituye por 'n', la letra 'b' por 'o'");
            printf("\n\tNota: solo acepta letras\n\n");    
	        printf("introduce tu usuario: ");         //introduce usuario
            scanf("%s",userrot);                      //Guarda usuario
			printf("\n**Contrasena sin espacios**\n");  
            printf("introduce tu contrasena: ");      //Pide contraseña
            scanf("%s",rot);                          //Guarda contraseña
            while(rot[i]!='\0'){                      //Ciclo while para evaluar contraseña letra a letra
              rango=rot[i];
              if(rango>='a'&&rango<'n')               //Condicion para realizar el cifrado ROT13
              rot[i]=rango+13;               
              else if(rango>='n'&&rango<='z')         
              rot[i]=rango-13;
              printf("letra %c\n",rot[i]);
              i++;}
            printf("\t******************************************\n");  
            printf("\tContrasena cifrada con ROT13: %s\n",rot);            //Imprime cadena
			printf("\t******************************************\n");	
			break;	
	 	case 2:
            printf("\n\t\t\t\t**Cifrado Cesar**\n");  //Cifrado Cesar
            printf("\n\tEl cifrado Cesar consiste en sustituir una letra del alfabeto por otra que se encuentre n numeros adelante");
            printf("\n\tEjemplo: la letra 'a' + 1 la sustituye por b. La letra a + 2 la sustituye por c");
            printf("\n\tNota: solo acepta letras\n\n");
			printf("introduce tu usuario: ");         //introduce usuario
			scanf("%s",userce);                       //Guarda usuario
			printf("\n**Contrasena sin espacios**\n");    
			printf("introduce tu contrasena: ");      //Pide contraseña
			scanf("%s",cesar);                        //Guarda contraseña
			printf("introduce un numero: ");          
			scanf("%d",&mov);                         //Guarda nuemero para realizar cifrado Cesar
			while(cesar[i]!='\0'){                    //Ciclo while para evaluar contraseña letra a letra hasta \0    
        	  cesar[i]=cesar[i]+mov;                  //Condicion para realizar el cifrado Cesar
        	  printf("letra %c\n",cesar[i]);
              i++;}
            printf("\t*******************************************\n");  
            printf("\tContrasena cifrada con cifrado Cesar: %s\n",cesar);  //Imprime cadena
            printf("\t*******************************************\n");
            break;
        default:
        	printf("\n\tNumero incorrecto. Vea en el menu las posibles opciones");   //En caso de error
        	printf("\n");
        	printf("\n");
		}
    }while(num!=1&&num!=2);		   	                  //Repite el switch en caso de que digite un numero incorrecto
}
