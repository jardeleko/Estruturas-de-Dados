#include <stdio.h>
#include <stdlib.h>

typedef struct structure{
	char a;
	char b;
}structure;

int main (void){
	structure *p;
	char buffer[2] = {16, 4};
	p = (struct structure*) &buffer;
	printf("a: %i\t b: %i\n", p->a, p->b);
	
	return 0;
}