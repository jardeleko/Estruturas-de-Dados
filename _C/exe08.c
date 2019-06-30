#include <stdio.h>

int main (void){
	double var[10], validate;
	int i, a, aux;
	for(i = 0; i < 11; i++)	scanf("%lf", &var[i]);
	scanf("%lf", &validate);
	for(i = 0; i < 11; i++)	{
		if(validate == var[i])  a = 1, aux = i;
	}
	if(a) printf("o valor esta na posição: %d\n", aux);
	else printf("Não encontrou\n");
	
	return 0;
}