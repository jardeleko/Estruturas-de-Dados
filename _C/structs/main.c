#include <stdio.h>
#include <stdlib.h>
#include "ex01.h"

int main(){
	float d;
	Ponto *p, *q;
	p = pto_criar(10, 21);
	q = pto_criar(7, 25);

	d = pto_distancia(p, q);
	printf("Distancia entre pontos: %f\n", d);
	pto_libera(q);
	pto_libera(p);
	
	return 0;
}