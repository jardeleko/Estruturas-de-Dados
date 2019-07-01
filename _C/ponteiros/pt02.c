#include <stdio.h>
#include <stdlib.h>
#define null ((char*) 0 )

int main(void){
	int *p, a;
	a = 5;
	*p = null;
	*p = a;

	printf("%d\t %d\t %d\n", *p, a, p);

	return 0;
}