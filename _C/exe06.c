#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void){
	double var[10], small, plus;
	int i;
	memset(var, 0, sizeof(var));	
	for(i = 0; i < 11; i++)	scanf("%lf", &var[i]);
	
	for(i = 0; i < 11; i++){
		if(i == 0) small = plus = var[i];
		else {
			if(var[i] >= plus) plus = var[i];
			else  small = var[i];
		}  
	printf("no indice: %d, com valor: %.2lf\n var maior = %.2lf / var menor = %.2lf\n", i, var[i], plus, small);
	}	
	return 0;
}