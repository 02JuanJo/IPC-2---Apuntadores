#include <stdio.h>

int maint(){
	inv lista_arr[5] = {10,20,30,40,50};
	int *lista_ptr
	lista_ptr = lista_arr;
	printf("%d\n",lista_arr[0]);
	printf("%d\n",lista_ptr[0]);
	printf("%d\n",*lista_ptr);
	printf("%d\n",*lista_ptr);
	return 0;
}