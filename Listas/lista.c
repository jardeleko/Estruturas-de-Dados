#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct list {
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
		printf("%d\n", p->info); /*printando os elementos da lista*/
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
		if(p->info == value) return p; /*buscando na lista O(n)*/
	}
	return NULL;
}

List* delete_date(List* l, int value){
	List* ant = NULL;
	List* p = l;

	while(p!=NULL && p->info != value){
		ant = p;
		p = p->next;
	}
	if(p == NULL) return l;
	if(ant == NULL){
		/*delete first*/
		l = p->next;
	}	
	else{
		ant->next = p->next;
	}

	free(p);
}

void free_list(List* l){

	List* p = l;
	while(p != NULL){
		List* t = p->next;
		free(p);
		p = t;
	}
}
int compare(List* l1, List* l2){
	List* p1 = l1;
	List* p2 = l2;

	while(p1 != NULL && p2 != NULL){		
		if (p1->info != p2->info)
			return 0;
			p1 = p1->next;
			p2 = p2->next;
	}	
	return p1 == p2;	
}