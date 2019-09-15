#include <stdio.h>
#include <stdlib.h>

int main (void){
	int N, i, count = 1;
	int *Xi;
	
		while (scanf("%d", &N) != EOF){
			if (N >= 5 && N <= 5000){
				Xi = (int *) malloc(N * sizeof(int)); 
				count = 0;
				for (i = 0; i < N; ++i){
					scanf("%d", &Xi[i]);
				}				
					
					for (i = 0; i < N; ++i){

						if ((Xi[i] == 1) || (Xi[i] == 0)){
							if(Xi[i] == 0 && Xi[i + 1] == 0){ 
							count += 2;
							}
							else if(Xi[i] == 0 && Xi[i - 1] == 0 && Xi[i - 2] == 0) count = count - 1;
						}else exit(1);
					}
					
				
			count = count/2;
			printf("%d\n", count);
		
			free(Xi);
			}else exit(1);

	}
	return 0;
}	
