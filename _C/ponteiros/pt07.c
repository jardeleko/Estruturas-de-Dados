#include <stdio.h>
#include <stdlib.h>

int swap(int *i, int *j){
	int tmp;
	tmp = *i;
	*i = *j;
	*j = tmp;
	return 1;
}

int main (void){
	int a = 5, b = 10, tmp;

	printf("%d\t %d\n", a, b);
	swap(&a, &b);
	printf("%d\t %d\n", a, b);
	return 0;
}