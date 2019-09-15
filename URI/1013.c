#include <stdio.h>
#include <stdlib.h>
int main (void){
	int A, B, C;
	int aux, maiorABC;

	scanf("%d %d %d", &A, &B, &C);

	aux = (A+B+abs(A-B))/2;
	
	maiorABC = (aux+C+abs(aux-C))/2;

	printf("%d eh o maior\n", maiorABC);
	return 0;
}
