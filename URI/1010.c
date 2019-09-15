#include <stdio.h>
int main (void){

	int code, code2, amount, amount2;
	double value, value2;

	scanf("%d %d %lf", &code, &amount, &value);
	scanf("%d %d %lf", &code2, &amount2, &value2);

	value = (value * amount) + (value2 * amount2);

	printf("VALOR A PAGAR: R$ %.2lf\n", value);
	return 0;
}