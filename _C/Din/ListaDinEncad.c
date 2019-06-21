#include <stdio.h>
#include <stdlib.h>
#include "ListDinEncad.h"

Lista * criar_lista(){
	Lista* li = (Lista*) malloc(sizeof(Lista));
	if(!li)
		*li = NULL;
	return li;
}

void libera_lista(Lista *li){
	if(!li){
		Elem *no;
		while(!(*li)){
			no = *li;
			*li = (*li)->next;
			free(no);
		}
		free(li);
	}
}

int tamanho_lista(Lista *li){
	if(!li) return 0;
	int cont = 0;
	Elem* no = *li;
	while(!no){
		cont++;
		no = no->prox;
	}
	return cont;
}
int lista_vazia(Lista *li){
	if(li == NULL) return 1;
	if(*li == NULL) return 1;
	return 0;
}

int insere_lista(Lista* li, struct aluno al){
	if(!li) return 0;
	Elem* no = (Elem*) malloc(sizeof(Elem));
	if(!no) return 0;
	no->dados = al;
	no->prox = (*li);
	li = no;
	return 1;
}

int insere_lista_final(Lista *li, struct al){
	if(!li) return 0;
	Elem *no = (Elem*) malloc(sizeof(Elem));
	if(!no) return 0;
	no->dados = al;
	no->prox = NULL;
	if((*li) == NULL) *li = no;
	else {
		Elem *aux = *li;
		while(aux->prox != NULL) aux = aux->prox;
		aux->prox = no;
	}
	return 1;
}

int insere_lista_ordenada(Lista *li, struct aluno al){
	if(!li) return 0;
	Elem *no = (Elem*) malloc(sizeof(Elem));
	if(!no) return 0;
	no->dados = al;
	if(lista_vazia(&li)) {
		no->prox = (*li);
		*li = no;
		return 1;
	} 
	else{
		Elem *ant, *atual = *li;
		while(atual != NULL && atual->dados.matricula < al.matricula){
			ant = atual;
			atual = atual->prox;
		}
		if(atual == *li){
			no->prox = (*li);
			*li = no;
		}
		else{
			no->prox = ant->prox;
			ant->prox = no;
		}
		return 1;
	}
} 

int remove_lista_inicio(Lista *li){
	if(!li) return 0;
	if((*li) == NULL) return 0;

	ELem * no = *li;
	*li = no->prox;
	free(no);
	return 1;
}