#include <stdio.h>
#include <stdlib.h>

int bubblesort_crescent(int array[]){
	int in = 1, aux, i;
	while (in == 1){
		in = 0;
	
		for(i = 0; i < 5; i++)	
			if(array[i] > array[i+1]) in = 1, aux = array[i], array[i] = array[i+1], array[i+1] = aux;

	}
}

int bubblesort_decrescent(int array[]){
	int aux, in = 1, i;
	while (in == 1){
		in = 0;
	
		for(i = 0; i <=3; i++)	
			if(array[i] < array[i+1]) in = 1, aux = array[i + 1], array[i + 1] = array[i], array[i] = aux;
	}
}


int main (void){
	int array[5], i;
	array[0] = 200;
	array[1] = 10;
	array[2] = 0;
	array[3] = 5;
	array[4] = 30;
	
	bubblesort_crescent(array);
	for (i = 0; i < 5; ++i)	printf("array[%d]: %d\n", i, array[i]);

	printf("\n");
	bubblesort_decrescent(array);
	for (i = 0; i < 5; ++i)	printf("array[%d]: %d\n", i, array[i]);

	return 0;
}