#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int u;
	double f;
} ed;

int main(void){
	
	ed *p;

	p->u = 10;
	p->f = 6.7;

	printf("Jardel Osorio Duarte\nnota: %d\nmedia:%.2lf\n", p->u, p->f);
	return 0;
}