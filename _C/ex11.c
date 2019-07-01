#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char nome[30];
	int idade, id;
	double peso;
}pessoa;

int main (void){
	int i;
	pessoa p1;
	
	fgets(p1.nome, 30, stdin);
	scanf("%d", &p1.idade);
	scanf("%d", &p1.id);
	scanf("%lf", &p1.peso);
	printf("\n");
	printf("nome: %s\n", p1.nome);
	printf("nome: %d %d %.2lf\n", p1.idade, p1.id, p1.peso);
	
}