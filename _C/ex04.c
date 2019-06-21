#include <stdio.h>
#include <stdlib.h>
#include "ex04.h"

int stack_empty(stack *s){
	s->heap = NULL;
	return 1;
}

int push(stack *s,int value){
	snode *p;
	p = malloc(sizeof(stack));
	if(!p) return -1;
	p->key = value;
	p->next = s->heap;
	s->heap = p;
	return 1;	
}

int pop(stack *s){
	int ret;
	stack *p;
	if(p == NULL) return 0;
	ret = p->heap->key;
	p->heap = s->heap->next;
	free(p);
	return ret;
}

void show(stack *s){
	stack *p = malloc(sizeof(stack));
	for (p = s; p != NULL; p = s->heap->next)	 {
	 	printf(" %d ", p->heap->key);
	 } 
		printf("\n");  
}

void stack_free(stack *s){
	stack *p = malloc(sizeof(stack));
	if(!p) return;
	p = s; 
	free(p);
}
