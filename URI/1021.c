#include <stdio.h>
#include <math.h>
int main (void){
	double n = 0;
	int coin = 0;
	scanf("%lf", &n);

	if(n >= 0 && n <= 1000001){
	
		printf("NOTAS:\n");
		coin = n/100;
		n -= (coin*100);
		printf("%d nota(s) de R$ 100.00\n", coin);
		coin = n/50;
		n -= (coin*50);
		printf("%d nota(s) de R$ 50.00\n", coin);
		coin = n/20;
		n -= (coin*20);
		printf("%d nota(s) de R$ 20.00\n", coin);
		coin = n/10;
		n -= (coin*10);
		printf("%d nota(s) de R$ 10.00\n", coin);
		coin = n/5;
		n -= (coin*5);
		printf("%d nota(s) de R$ 5.00\n", coin);
		coin = n/2;
		n -= (coin*2);
		printf("%d nota(s) de R$ 2.00\n", coin);	

		printf("MOEDAS:\n");
		coin = n/1;
		n -= (coin*1);
		printf("%d moeda(s) de R$ 1.00\n", coin);
		coin = n/0.50;
		n -= (coin*0.50);
		printf("%d moeda(s) de R$ 0.50\n", coin);
		coin = n/0.25;
		n -= (coin*0.25);		
		printf("%d moeda(s) de R$ 0.25\n", coin);	
		coin = n/0.10;
		n -= (coin*0.10);	
		printf("%d moeda(s) de R$ 0.10\n", coin);	
		coin = n/0.05;
		n -= (coin*0.05);
		printf("%d moeda(s) de R$ 0.05\n", coin);	
		coin = n/0.01;
		
		printf("%d moeda(s) de R$ 0.01\n", coin);
	
	
	}
	
	return 0;
}