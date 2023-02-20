// DIRECTIVAS DE PREPROCESADOR Y VARIABLES

#include <stdio.h> //sirve para pedirt datos al usuario
#include <string.h> // contiene la definicion de macros, constantes, funciones y algunas operaciones de manipulacion de memoria. 
#include <math.h> //sirve para operaciones matematicas basicas
#include <stdlib.h> //Contiene los prototipos de funciones de C para gestión de memoria dinámica, control de procesos y otras.

#define PI 3.1415 // ESTA ES UNA MACRO

int y = 5; // esta es una variable global se puede usar en cualquier funcion

int main (){
	
	float suma = 0;
	int x = 10; //variable local y solo se puede usar dentro de la funcion en la que esta
	
	suma = PI + x;
	printf("La suma es: %.2f", suma); //%f (f por que es flotante, si fuera i seria entero) sirve para guardar el valor de la variable en este caso suma 
	// el .2 en %.2f sirve para especificar el numero de decimales a guardar
	return 0;
}
	

	


