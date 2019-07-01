#include <stdio.h>

int main (void){
	double var[10], sum = 0, meddle = 0;
	int i;
	for(i = 0; i < 11; i++)	scanf("%lf", &var[i]);
	for(i = 0; i < 11; i++)	sum = sum +var[i];	
	meddle = (double)(sum/11);
	for(i = 0; i < 11; i++)	printf("indice: %d, valor: %.2lf\n", i, var[i]);
	printf("soma total: %.2lf  media final: %.2lf\n", sum, meddle);
	return 0;
}