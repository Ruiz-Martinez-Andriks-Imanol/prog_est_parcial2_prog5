/* Autor: Andriks Imanol Ruiz M�rtinez, Realizado: 31/03/2022
Escuela: Universidad del Valle de M�xico Campus Villahermosa
Materia: Programaci�n Estructurada
Ciclo: 01/2022

Este es un programa en Lenguaje C de la materia de Programaci�n Estructurada
Muestra el uso de:

    -Variables en cadena y unsigned
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librer�as
    -uso de condicionales
    -Operadores l�gicos
    -Comentarios para la documentaci�n interna del programa
*/
#include<stdio.h>
int main(){
	unsigned char c;
	//Ejemplo de impresi�n de caracteres especiales
	printf("Pa%cuelo, Canci%cn\n",164,162);
	printf("Introduce un caracter: ");
	scanf("%c", &c);
	//printf("Se introdujo el caracter <%c> y su codigo ASCII es %d \n ", dato, dato);
	//Probar si es una letra
	//	Mayusculas			minusculas			acentos y �			�			�	
	if(c>='A' && c<='Z' || c>='a' && c<='z' ||  c>=160 && c<=165 || c==129 || c==130){
		printf("<%c> Es una letra\n", c);
	}
	else if(c>='0' && c<='9'){
		printf("<%c> Es un numero\n", c);
	}
	else {
		printf("<%c> Es un caracter especial\n", c);
	}
	return 0;
}


