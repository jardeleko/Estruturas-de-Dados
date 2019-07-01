#include <stdio.h>
#include <stdlib.h>

int value_cubic(int a);

int referencial_cubic( int * aPtr);

int value_cubic(int a){
	return a * a * a;
}
int referencial_cubic(int *aPtr){
	 *aPtr = *aPtr  *  *aPtr  *  *aPtr;
	return *aPtr;
}

int main (void){
	int number = 5;
	printf("\nValor original é: %d", number);
	number = value_cubic(number);
	printf("\n novo valor: %d", number);
	printf("\n");
	number = 5;

	printf("\nValor original é: %d", number);
	referencial_cubic(&number);

	printf("\n novo valor: %d\n", number);
	return 0;
}