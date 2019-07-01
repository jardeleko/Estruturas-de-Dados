#include <stdio.h>
#include <stdlib.h>


int main (void){
	int i;
	int array[3] = {3, 4, 7};
	int *ptr = array;

	printf("%p\n", array);
	printf("%p\n", ptr);
	printf("%p\n", &ptr);

	for (i = 0; i < 3; ++i){
		printf("O endereço do índice %d do vetor é %p\n", i, &ptr[i]);
       printf("O valor do índice %d do vetor é %d\n", i, ptr[i]);
	}	
	return 0;
}