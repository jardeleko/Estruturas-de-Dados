#include <stdio.h>
#define MAX 1123456

int main (void){
	int N, count = 0;
	scanf("%d", &N);

	if (N>=0 && N<=MAX){
		printf("%d\n", N);
		while(N >= 100){
		count+=1;
		N-=100;
		}
		printf("%d nota(s) de R$ 100,00\n", count);
		count = 0;

		while(N >= 50){
		count+=1;
		N-=50;
		}
		printf("%d nota(s) de R$ 50,00\n", count);
		count = 0;

		while(N >= 20){
		count+=1;
		N-=20;
		}
		printf("%d nota(s) de R$ 20,00\n", count);
		count = 0;

		while(N >= 10){
		count+=1;
		N-=10;
		}
		printf("%d nota(s) de R$ 10,00\n", count);
		count = 0;

		while(N >= 5){
		count+=1;
		N-=5;
		}
		printf("%d nota(s) de R$ 5,00\n", count);
		count = 0;		

		while(N >= 2){
		count+=1;
		N-=2;
		}
		printf("%d nota(s) de R$ 2,00\n", count);
		count = 0;

		while(N >= 1){
		count+=1;
		N-=10;
		}
		printf("%d nota(s) de R$ 1,00\n", count);
	}

	
}
