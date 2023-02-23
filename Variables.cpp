//variables

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nombre[] = "Pedro"; //asignacion de variable de tipo char. 
	int edad = 40; // asginacion de variable de tipo numero entero. 
	int edad_siguiente = edad+1; //la nueva variable es edad pero sele suma 1 
	printf(" Me llamo %s y tengo %d \n", nombre, edad); //se usa %s para agregar la variable char y %d para agregar la variable numerica int
	printf("Tengo %d y me llamo %s \n", edad, nombre); // para llamar la svariables se tienen que poner en el orden que aparecen
	printf("el año que viene tendre %d \n", edad_siguiente);
	edad = edad + 1; //la variable ya esta definda por lo que se puede llamar para sumar 1
	printf("el año que viene tendre %d \n", edad); // asi no es necesario crear otra variable
	
	return 0;
}
