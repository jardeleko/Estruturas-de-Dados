#include <stdio.h>

int main (void){
	double A, B, C, pi = 3.14159;
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);

	printf("TRIANGULO: %.3lf\n", (A*C)/2);
	printf("CIRCULO: %.3lf\n", (C*C*pi));
	printf("TRAPEZIO: %.3lf\n", ((A+B)*C)/2);
	printf("QUADRADO: %.3lf\n", (B*B));
	printf("RETANGULO: %.3lf\n", (A*B));

	return 0;
}
