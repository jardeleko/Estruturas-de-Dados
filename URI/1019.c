#include <stdio.h>
#include <math.h>

int main (void){
	int N, hour, min, sec;
	scanf("%d", &N);
	min = N/60;
	sec = ceil(N%60);
	hour = (N/60)/60;
	if (hour >= 1){
		min -= (hour*60);
	}
	printf("%d:%d:%d \n",hour, min, sec);

	
	return 0;
}