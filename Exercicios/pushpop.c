#include <stdio.h>
#include <stdlib.h>

int push(int x, int v[], int n){
	if(!realloc(v, (n+1) * sizeof(int))) return 0;
	v[n] = x;
	return 1;	
}
int pop(int x, int v[], int n){
	int i;
	for (i = 0; i < n; ++i){
		if(v[i] == x) {
			v[i] = v[i + 1];
		}
	}
	return realloc(v, (n-1) * sizeof(int)) != NULL;
}

int main (void){
	int x, *v, n, i;

	scanf("%d", &n);
	scanf("%d", &x);

	v = (int *) malloc(n * sizeof(int));
	for (i = 0; i < n; ++i){
		scanf("%d", &v[i]);
	}

	push(x, v, n);
	for (i = 0; i < n+1; ++i){
		printf(" %d ", v[i]);
	}

	printf("\n\n");
	pop(x, v, n);

	for (i = 0; i < n; ++i)	{
		printf(" %d ", v[i]);
	}
	printf("\n\n");
}