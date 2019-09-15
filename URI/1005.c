#include <stdio.h>

int main (void){

	double A=0, B=0, middle=0;
	scanf("%lf", &A);
	scanf("%lf", &B);
	
	if (A >= 0 && A <= 10.0) A *= 3.5;
	if (B >= 0 && B <= 10.0) B *= 7.5;
	middle = (A+B)/11;
	printf("MEDIA = %.5lf\n", middle);

}