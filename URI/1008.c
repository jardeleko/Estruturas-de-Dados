#include <stdio.h>

int main (void){

	int  number, hours;
	double salary;

	scanf("%d", &number);
	scanf("%d", &hours);
	scanf("%lf", &salary);

	salary = salary * hours;

	printf("NUMBER = %d\n", number);
	printf("SALARY = U$ %.2lf\n", salary);
}