#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct list {
	/* nó é minha intidade*/
	int info;
	struct list *next;
};

List* create_list(){
	return NULL;
}

List* insert_list(List* l, int inf){
	List* new = (List*) malloc(sizeof(List)); /*aponta para o novo elemento na primeira posição da lista*/
	new->info = inf; 
	new->next = l;	
	return new;
}

void show_all(List* l){
	List* p;
	for (p = l; p != NULL; p = p->next){
		printf("%d\n", p->info);
	}
}

int check(List* l){
	if(l == NULL)
		return 1;
	return 0;
}

List* search(List* l, int value){
	List* p;
	for (p = l; p != NULL; p = p->next)	{
		if(p->info == value) return p;
	}
	return NULL;
}