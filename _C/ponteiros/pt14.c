#include <stdio.h>

int sum(int a, int b){
	return (a+b);
}
int sub(int a, int b){
	return (a-b);
}

int (*menos)(int, int) = sub;

int calculate(int x, int y, int(*func) (int, int)){
	int g;
	g = (*func)(x, y);
	return g;
}

int main (void){
	int m, n;
	m = calculate(7, 5, sum);
	n = calculate(19, m, sub);

	printf("%d\n", m);
	printf("%d\n", n);	
	return 0;
}