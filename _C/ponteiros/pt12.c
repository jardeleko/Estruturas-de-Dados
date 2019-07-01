#include <stdio.h>

void set_value(int array[], int var);
void get_value(int array[], int var);

void set_value(int array[], int var){
	int i;
	for (i = 0; i < var; ++i){
		printf("set:[%d]\n", i);
		scanf("%d", &array[i]);
	}
}

void get_value(int array[], int var){
	int i;
	for (i = 0; i < var; ++i){
		printf("this.value:[%d]\n", array[i]);
	}
}


int main (void){
	int array[3];
	set_value(array, 3);
	get_value(array, 3);
	return 0;
}