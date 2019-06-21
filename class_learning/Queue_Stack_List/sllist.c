#include "sllist.h"
#include <stdio.h>
#include <stdlib.h>


void sllist_init(sllist* l) {
	l->head = NULL; /*aterrar */
}

int sllist_insert(sllist *l, int key){ 
	lnode *p = malloc(sizeof(lnode));/* aloca dinamicamente p */
	if(!p) return 0; /*se fosse void não retornaria nada*/
	p->key = key; /*setando o valor e inserindo na lista*/
	p->next = l->head; /*[struct p] -> [next] = head que é o inicio da lista novamente*/
	l->head = p; /*devolve a struct head desta forma [null] <-> [value] */
	return 1; 
}

void sllist_erase(sllist *l, int key){
	lnode *p, *q; 
	for (p = l->head; p != NULL && p->key != key; q = p, p = p->next); /*enquanto existir p e o valor passado for diferente da chave, um ponteiro recebe o outro e anda uma casa*/
	if(!p) return; 
	if( p == l->head) l->head = p->next; /*se encontrar a chave e p for igual a ponta, ponta recebe o proximo e limpa*/
	else q->next = p->next; /*assim vai percorrer até entrar no if anterior*/
	free(p); /*aqui limpa*/
}

void sllist_print(sllist *l) {
	lnode *p;
	for (p = l->head; p!= NULL; p = p->next)	/*enquanto existir or p != de nulo percorre o vetor p*/
		printf("%s%d", p == l->head ? "" : " ", p->key); 
	printf("\n"); 
}	

void sllist_free(sllist *l) {
	lnode *p, *q;
	for (p = l->head; p != NULL; p = q)	{ /*enquanto existir or p != de nulo, auxiliar recebe p*/
		q = p->next;
		free(p);
	}
}