#include <stdio.h>

int main (){
	char teste[] = "palavra";
	char test[] = "palavra";
	int aux;

	while(!sizeof(teste)){
	printf("%s\n", teste);
	}

	if(teste == test){
		printf("SIM\n");
		printf("%s \n %s", teste, test);
	}
	aux = strcmp(teste, teste);
		
	printf("este é o retorno %d", aux);
	printf("\n");

}