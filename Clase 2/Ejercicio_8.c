#include <stdio.h>
//Direcciones Inv�lidas - Parte 2

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
//Se genera la direcci�n inv�lida por el manejo en otro �mbito

	return 0;
}