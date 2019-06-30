#include <stdio.h>
#include <stdlib.h>

int main (void){
	double var[10];
	int i;

	for(i = 0; i < 11; i++)	scanf("%lf", &var[i]);
	for(i = 0; i < 11; i++)	printf("indice: %d, valor: %.2lf\n", i, var[i]);
	
	return 0;
}