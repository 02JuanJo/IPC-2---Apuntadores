#include <stdio.h>
//Direcciones Inválidas - Parte 2

int *ptr_int, var;

void init_ptr(){
	int local = 57;
	ptr_int = &local;
	var = *ptr_int;
	*ptr_int = 23;
}


int main() {
	init_ptr();	
	var = *ptr_int; 
	*ptr_int = 20;
//Se genera la dirección inválida por el manejo en otro ámbito

	return 0;
}