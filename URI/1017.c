#include <stdio.h>

int main(void){
	int time, fast;
	double lit, dist;

	scanf("%d", &time);
	scanf("%d", &fast);

	dist = time*fast;
	lit = dist/12;

	printf("%.3lf\n", lit);
}