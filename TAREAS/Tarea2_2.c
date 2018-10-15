#include<stdio.h>                                 //Libreria de entrada-salida       
/*Ejercicio 2.
Hacer un programa que haga conversiones de tiempo. Segundo-Minuto-
Hora-Día-Años. Con un Switch pedirle que conversión quiere hacer e
imprimirle el resultado.*/
int main(){
int num;;
float segundos,s1,s2,s3,s4,minu,m1,m2,m3,m4,hora,h1,h2,h3,h4,dia,d1,d2,d3,d4,ayo,a1,a2,a3,a4;
printf("\n\t\t\t\tConversiones\n");
	 printf("\n¿Que conversion quiere hacer?\n");
	 printf("1....Segundos\n");
	 printf("2....Minuto\n");
	 printf("3....Hora\n");
	 printf("4....Dia\n");
	 printf("5....Ayos\n");
	 printf("\n");
	 printf("\nSeleccione la converion que quiere hacer: ");
	 scanf("%i",&num);
	 switch(num){
	 	case 1:
	 		printf ("\nSu seleccion Fue segundos");
	 		printf ("\nNota: Solo recibe numeros enteros");
	 		printf ("\nDigite la cantidad de segundos: ");
	 		scanf("%f",&segundos);
	 		s1= segundos/60;
	 		s2= segundos/3600;
	 	    s3= segundos/86400;
	 	    s4= segundos/31536000;
	 	    printf ("\n%f segundos son %f minutos",segundos,s1);
	 	    printf ("\n%f segundos son %f horas",segundos,s2);
	 	    printf ("\n%f segundos son %f dias",segundos,s3);
	 	    printf ("\n%f segundos son %f ayos",segundos,s4);
	 	    break;
	 	case 2:
	 		printf ("\nSu seleccion Fue minutos");
	 		printf ("\nNota: Solo recibe numeros enteros");
	 		printf ("\nDigite la cantidad de minutos:  ");
	 		scanf("%f",&minu);
	 		m1= minu*60;
	 		m2= minu/60;
	 	    m3= minu/1440;
	 	    m4= minu/525600;
	 	    printf ("\n%f minutos son %f segundos",minu,m1);
	 	    printf ("\n%f minutos son %f horas",minu,m2);
	 	    printf ("\n%f minutos son %f dias",minu,m3);
	 	    printf ("\n%f minutos son %f ayos",minu,m4);
	 	    break;
		case 3: 
		    printf ("\nSu seleccion Fue horas");
		    printf ("\nNota: Solo recibe numeros enteros");
	 		printf ("\nDigite la cantidad de horas: ");
	 		scanf("%f",&hora);
	 		h1= hora*3600;
	 		h2= hora*60;
	 	    h3= hora/24;
	 	    h4= hora/8760;
	 	    printf ("\n%f horas son %f segundos",hora,h1);
	 	    printf ("\n%f horas son %f minutos",hora,h2);
	 	    printf ("\n%f horas son %f dias",hora,h3);
	 	    printf ("\n%f horas son %f ayos",hora,h4);
			break;     
	 	case 4:
		    printf ("\nSu seleccion Fue dias");
		    printf ("\nNota: Solo recibe numeros enteros");
	 		printf ("\nDigite la cantidad de dias: ");
	 		scanf("%f",&dia);
	 		d1= dia*86400;
	 		d2= dia*1440;
	 	    d3= dia*24;
	 	    d4= dia/365;
	 	    printf ("\n%f dias son %f segundo",dia, d1);
	 	    printf ("\n%f dias son %f minuto",dia,d2);
	 	    printf ("\n%f dias son %f horas",dia,d3);
	 	    printf ("\n%f dias son %f ayos",dia,d4);	
	 	    break;
	 	case 5:
		    printf ("\nSu seleccion Fue ayos");
		    printf ("\nNota: Solo recibe numeros enteros");
	 		printf ("\nDigite la cantidad de ayos: ");
	 		scanf("%f",&ayo);
	 		a1= ayo*31536000;
	 		a2= ayo*525600;
	 	    a3= ayo*8760;
	 	    a4= ayo*365;
	 	    printf ("\n%f ayos son %f segundos",ayo,a1);
	 	    printf ("\n%f ayos son %f minutos",ayo,a2);
	 	    printf ("\n%f ayos son %f horas",ayo,a3);
	 	    printf ("\n%f ayos son %f dias",ayo,a4);	
	 	    break;
	 	default:
		     printf ("\nNumero no valido. Seleccione nuevamente su numero"); 
	}
}

