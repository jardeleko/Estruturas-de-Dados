#include <stdio.h>
#include <stdlib.h>

int sequential(int v[], int n){
	int i, j, tmp;

	for (i=0;i<n; i++){
		for(j=i+1;j<n;j++){
			if (v[i]>v[j])	{
				tmp=v[i];
				v[i]=v[j];
				v[j]=tmp;
			}
		}	
	}
	return 1;
}

int sequencialSearch(int v[], int n, int x){
	while(n > -1){
		if(v[n] == x) return n;
		n = n-1;
	}
	return -1;
}



int binarySearch(int v[], int x, int n){
	int meddle, begin, end;
	begin = 0;
	end = n-1;
	while(begin <= end){
	meddle = (begin + end)/2;
		if(v[meddle] == x) return v[meddle];
		else if(x > v[meddle]) begin = meddle+1;		
		else end = meddle-1;
	}
	return -1;
}

int main(void){
	int vet[10];
	int i, n, x;

	for(i = 0; i<10; i++){
		scanf(" %d", &vet[i]);
	}
	n = 10;
	sequential(vet, n);
	printf("retornou\n");
	scanf("%d", &x);
/*	int aux = sequencialSearch(vet, n, x);
	printf("%d\n", aux);
*/
	int aux = binarySearch(vet, x, n);
	printf("(%d)\n", aux);
	return 0;
}