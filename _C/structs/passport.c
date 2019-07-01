#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char place[34];
	int id;
	double value, datetime;
}passage;  

passage pass;

void init();
int insert();
void show_all();

void init(){
	strcpy(pass.place, "0");	
	pass.id = 0;	
	pass.value = 0;
	pass.datetime = 0;
}

int insert(){ 
	printf("Distiny:\n");
	scanf("%s", &pass.place);
	printf("Enter the code/identification: \n");
	scanf("%d", &pass.id);
	printf("set the price:\n");
	scanf("%lf", &pass.value);
	printf("Set the hour:\n");
	scanf("%lf", &pass.datetime);
	return 1;
}

void show_all(){
	if(pass.id) printf("Distiny: %s\ncode:%d\n value ticket:%.2lf  outlet:%.2lf\n",
	pass.place, pass.id, pass.value, pass.datetime);
	else return;
}

int main (void){
	int op; 
	passage pass;
	init();	
	printf("1 para cadastrar\n2 para escolher destino\n3 para sair\n");
	while(scanf(" %d", &op) != EOF){
		switch(op){
			case 1:
				insert();
				break;
			case 2:
				show_all();
				break;
			case 3:
				exit(1);
				break;
			default:		
				exit(1);		
		}
	}

	return 0;
}