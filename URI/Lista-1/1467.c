#include <stdio.h>
int main() {

	int A= 0, B = 0, C = 0;

	
		while(scanf("%d %d %d", &A, &B, &C) != EOF){						
			if(A!=B && A!=C)
				printf("A\n");
			else if(B!=A && B!=C)
				printf("B\n");
			else if(C!=A && C!=B)
				printf("C\n");
			else
			printf("*\n");
		
		}
	return 0;
}

