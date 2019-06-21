#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int x = 10;
	double y = 20.50;

	int *pX = &x;
	double *pY = &y;
	int *pZ;
	pZ = 2112316376;
	printf("%d\n", pZ);

	printf("End x = %d, valor x = %d\n", &pX, *pX);
	printf("End y = %d, valor y = %lf\n", &pY, *pY);
	printf("Soma: %lf\n", *pX + *pY);
	getchar();
	return 0;
}