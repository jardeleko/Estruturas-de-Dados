#include <stdio.h>

int main (void){
	int numb[5];
	int *p, n;

	p = numb;
	*p = 10;
	p++;
	*p = 20;
	p = &numb[2];
	*p = 30;
	p = numb + 3;
	*p = 40;
	p = numb;
	*(p + 4) = 50;

	for(n = 0; n < 5; n++){
		 << numb[n] << ",";
	}


	return 0;
}