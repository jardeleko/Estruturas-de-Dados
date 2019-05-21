
#include <stdio.h>
#include <stdlib.h>

binarysearch(int a, int n, int z, int A[]){
	int m;
	while(a < n){
		m = (a+n)/2;
		if (A[m] == z) return A[m];
		if (z > A[m]){
			a = m;	
			return binarysearch(a, n, z, A);
		}
		else{ 
			n = m;
			binarysearch(a, n, z, A);
		}
	}

}

int main (void){

	int j, *A, i, n, a = 0, result;
	int z;
	printf("Entre com o tamanho do vetor:\n");
	scanf("%d", &n);
	printf("Entre com um numero de x:\n");
	scanf("%d", &z);

	A = (int *) malloc(n * sizeof(int));

	for (j = 0; j < n; ++j){
		scanf("%d", &A[j]);
	}
	n = n-1;
	result = binarysearch(a, n, z, A);
	printf("\n\n%d\n\n", result);
}