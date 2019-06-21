#include <stdio.h>
#include <stdlib.h>
#include "ex02.h"

List* list_initialize(){
	List *li;
	li = (List*) malloc(sizeof(list));
	if(!li) return 0;
	li->qtd = 0;
	return li;
}

void list_free(List * li){
	free(li);
}

int list_lenght(List *li){
	if(li == NULL) return -1;
	return li->qtd;
}

int list_full(List *li){
	if(li == NULL) return -1;
	return li->qtd;
}

int list_empty(List *li){
	if(li == NULL) return -1;
	return li->qtd;

}

int insert_list_finaly(List *li, struct student al){
	if(!li) return 0;
	if(list_full(li)) return 0;
	li->date[li->qtd] = al;
	li->qtd++;
	return 1;
}

int insert_list_init(List *li, struct student al){
	if(!li) return 0;
	if(list_full(li)) return 0;
	int i;
	for (i = li->qtd-1; i >=0; i--)
		li->date[i+1] = li->date[i];
	li->date[0] = al;
	li->qtd++;
	return 1; /* complexidade O(n)*/
	
}

int insert_list_order(List *li, struct student al){
	if(!li) return 0;
	if(list_full(li)) return 0;
	int i, j = 0;

	while(j < li->qtd && li->date[j].index < al.index) i++;
	for(i = li->qtd-1; i >= j; i--) 
		li->date[i+1] = li->date[j];
	li->date[i] = al;
	li->qtd++;
	return 1;
}