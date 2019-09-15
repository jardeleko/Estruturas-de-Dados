#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1001

int main (void){
	int n, N[MAX], K, i, aux;
	scanf("%d\n", &n);
	scanf("%d\n", &K);

	memset(N, 0, sizeof(N));

	if(n < MAX){		
		for (i = 0; i < n; ++i){
			scanf("%d\n", &aux);			
			N[aux]++;
		}
		aux = 0;
		i = 1000;

		while(aux < K){
			if(N[i]>0) aux+=N[i];
			i--;
		}
		printf("%d\n", aux);
	}

	return 0;

}