#include <stdio.h>

int main (void){
	int X;
	double Y, result;

	scanf("%d", &X);
	scanf("%lf", &Y);

	result = X/Y;

	printf("%.3lf km/l\n", result);

}