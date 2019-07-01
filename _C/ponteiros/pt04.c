#include <stdio.h>

int main(void){
	int *a, *b, c = 4, d = 2;

	a = &c;
	b = &d;
	*b = 8;
	*a = *b;

	*a = 1;
	b = a;
	*b = 0;

	printf("(a: %d)\t, (b: %d)\t, (c: %d)\t, (d: %d)\t,\n", *a, *b, c, d);

	return 0;
}