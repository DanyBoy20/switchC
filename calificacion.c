/* Programa: calificacion.c
* Descripci�n: Dada una calificaci�n con n�mero despliega un mensaje
* 0,1,2,3,4,5,6 - Reprobado
* 7 - Suficiente, Aprobado
* 8 - Bien, Aprobado
* 9 - Notable, Aprobado
* 10 - Sobresaliente, Aprobado*/
#include<stdio.h>
#include<stdlib.h>
/*Funci�n principal*/
main()
{
/*Declaraci�n de variables*/
int nota;
/*Mensaje de bienvenida */
printf("\nEl siguiente programa lee una calificacion con numero, \ndetermina que tipo de calificacion es\n");
/*Datos de entrada*/
printf("\nInserte una calificacion numerica: ");
scanf("%d",&nota);
/*Comparaci�n*/
switch(nota){
case 0: case 1: case 2: case 3: case 4: case 5:
case 6: printf("\n\n\t\"Reprobado\"");
break;
case 7: printf("\n\n\t\"Suficiente, Aprobado\"");
break;
case 8: printf("\n\n\t\"Bien, Aprobado\"");
break;
case 9: printf("\n\n\t\"Notable, Aprobado\"");
break;
case 10: printf("\n\n\t\"Sobresaliente, Aprobado\"");
break;
default: printf("\n\n\t\"Esa nota es incorrecta\"");
}
printf ("\n\n\t\t");
system ("pause");
}
