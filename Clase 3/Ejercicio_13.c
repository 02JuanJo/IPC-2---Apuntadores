#include <stdio.h>

int maint(){
	int lista[5] = {10,20,30,40,50};
	int *p;

	p = &lista[30];
	p = lista + 3

	printf("%d\n", lista[2]);
	printf("%d\n", *(lista+2));
	return 0;
}