#include <stdio.h>

int main (void){

	double A = 0, B = 0 ,C = 0, middle = 0;
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);

	if (A >= 0 && A <= 10.0) A *= 2;
	if (B >= 0 && B <= 10.0) B *= 3;
	if (C >= 0 && C <= 10.0) C *= 5;

	middle = (A+B+C)/10;
	printf("MEDIA = %.1lf\n", middle);

}