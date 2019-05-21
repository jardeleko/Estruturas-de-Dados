#include <stdio.h>

int main (void){

	int fib[10];
	int i, aux = 0, aux2 = 0;

 	fib[0] = 0;
 	fib[1] = 1;
	fib[2] = 1;

	for (i = 0; i < 100; ++i){
		if(i>1){
			aux = fib[i-1]+fib[i-2];
			fib[i] = aux;
			printf(" %d ", fib[i]);					
			
		}else{
			printf(" %d ", fib[i]);
		}
	}

	printf("\n");
	return 0;
}		
			

	 
	
