#include <stdio.h>

int main() {
	
	char c = 'z';
	char *pc = &c;
	char **ppc = &pc;
	char ***pppc = &ppc;
	***pppc = 'm';

	printf("El valor del último apuntador es: %c", ***pppc); 

	return 0;
}