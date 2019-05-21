#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#define N 50 /*setando capacidade maxima da pilha*/

struct stack{ 

	int n;
	double vet[N];
};

Stack* create_stack(){
	Stack* p = (Stack*)malloc(sizeof(Stack));
	p->n = 0;
	return p;
}
void push(Stack* p, double v){
	if (p->n == N){ /*Se MAX N == 50 elementos entra no exit*/
		printf("Capacidade maxima!\n");
		exit(1);
	}
	p->vet[p->n] = v;
	p->n++; 
}

int check(Stack* p){
	return (p->n == 0);
}

double pop(Stack* p){
	double v;

	if (check(p)){
		printf("Pilha está vazia!\n");
		exit(1);
	}
	v = p->vet[p->n - 1];
	p->n--;
	return v;
}
double head(Stack* p){
	if (check(p))	{
		printf("Pilha está vazia!\n");
		exit(1);
	}
	return p->vet[p->n-1];
}

void free_stack(Stack* p){
	free(p);
}