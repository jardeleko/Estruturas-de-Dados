#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 365

int main (void){

	int i, n = 0, count = 0, aux, aux2;
	double value, meddle, medlleValue;
	char name[30];

	scanf("%d\n", &n);

	if (n < MAX){
		while(n != 0){
			scanf("%lf", &value);
			scanf("%[^\n]", name);
			
			for(i = 0; i < 30; ++i){
				if(name[i] == " " || name[i] == '\n') count+=1;
			}
			printf("day %d: %d kg\n" i, count);
			aux += count;
			aux2 += value;

			meddle = aux/n;
			medlleValue = aux2/n;

			printf("%.2lf kg by day\n", meddle);
			printf("R$ %.2lf by day \n", medlleValue);
			--n;
		}
	}

	return 0;
}