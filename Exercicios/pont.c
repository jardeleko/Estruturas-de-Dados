#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *p, v[5];

	int *p = &v[5];
	p++;

	printf(" %d %d\n", p, v[2]); 
}