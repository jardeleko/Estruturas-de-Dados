#include <stdio.h>

int main(void){
	int n, dia=0, mes=0, ano=0;
	scanf("%d", &n);

	while (n > 365){
		ano = n/365;
		mes = n%365;
	}

	printf("%d ano(s) \n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
	
	return 0;
}

/*
	if(n >= 365){
		ano = n/365;
		mes = n%365;
		dia = n%mes;
		mes /= 30;
		dia /= 3;
		
	}else if(n >= 30){
		mes = n/30;
		dia = n%mes;
		dia /= 3;
	}else if(n < 30){
		dia = n;
	}
