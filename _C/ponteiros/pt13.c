#include <stdio.h>

int sum(int a, int b){
	return (a+b);
}
int calculate(int x, int y, int(*func) (int, int)){
	int g;
	g = (*func)(x, y);
	return g;
}

int main (void){
	int m;
	m = calculate(7, 5, sum);
	printf("%d\n", m);	
	return 0;
}