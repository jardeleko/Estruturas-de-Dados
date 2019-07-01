#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int *p, a;
	a = 10;
	p = &a;
	*p = 5;

	printf("%d\t %d\t %d\n", *p, a, p);

	return 0;
}