#include <stdio.h>
int main (void){
	char name[25];
	double salary, sale;

	scanf("%s", name);
	scanf("%lf", &salary);
	scanf("%lf", &sale);	
	sale *=0.15;

	salary += sale;

	printf("TOTAL = R$ %.2lf\n", salary);
	return 0;
}