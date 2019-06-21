#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void stack_init(stack *s){
	s->top = NULL; /*aterra a pilha*/
}

int push(stack *s, int key){
	snode *p = malloc(sizeof(snode)); /*aloca dinamicamente struct p*/
	p->key = key; /*vetor recebe o valor no inicio*/
	p->next = s->top; /*[next] = [inicio] mas funciona desta forma [key2]<->[VAR1] */
	s->top = p; /*pilha retorna [value] <-> [null ou anterior]*/
	return 1;
}

int pop(stack *s){
 	int ret; 
 	snode *p = s->top; /*ponteiro auxliar pra receber o topo*/
 	if(!p) return -1; /*se não existe p a pilha esta vazia*/
 	ret = p->key; /*auxiliar recebe topo pra mostrar o valor que saio*/
 	s->top = p->next; /*onde era o topo recebe o proximo*/ 
 	free(p); /*libera o topo*/
 	return ret; /*mostra o valor apagado*/
}

void stack_free(stack *s){
	while (s->top != NULL) pop(s);/*enquanto existir topo passa o ponteiro s pra recursão*/
}
