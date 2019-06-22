#include "ListaDinEncad.h"
#include <stdio.h>
#include <stdlib.h>

Lista * criar_lista(Lista *li){
	li = (Lista*) malloc(sizeof(Lista));
	if(!li)	*li = NULL;
	return li;
}

void libera_lista(Lista *li){
	if(li == NULL){
		Elem *no;
		while((*li) == NULL){
			no = *li;
			*li = (*li)->prox;
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
	if(!li)	return 0;
	Elem *no = malloc(sizeof(Elem));
	if(!no) return 0;
	no->dados = al;
	no->prox = (*li);
	*li = no;
	return 1;
}

int insere_lista_final(Lista *li, struct aluno al){
	if(!li) return 0;
	Elem *no;
	no = malloc(sizeof(Elem));
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
	Elem *no;
	no = malloc(sizeof(Elem));
	if(!no) return 0;
	no->dados = al;
	if(lista_vazia(li)) {
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

	Elem *no = *li;
	*li = no->prox;
	free(no);
	return 1;
}
int remove_lista_final(Lista *li){
	if(!li) return 0;
	if(!(*li)) return 0;
	Elem *ant, *no = *li;
	while(no->prox != NULL){
		ant = no;
		no = no->prox;
	}
	if(no == (*li)) *li = no->prox;
	else ant->prox = no->prox;
	free(no);
	return 1;
}
int remove_lista(Lista *li, int mat){
	if(!li) return 0;
	Elem *ant, *no = *li;
	while(no != NULL && no->dados.matricula != mat){
		ant = no;
		no = no->prox;
		}
	if(no == NULL) return 0;
	if(no == *li) return 0;
	else 
		ant->prox = no->prox;
	free(no);
	return 1; 
}

int consulta_lista_pos(Lista *li, int pos, struct aluno *al){
	if(li == NULL || pos <= 0) return 0;
	Elem *no = *li;
	int i = 1;
	while(no !=NULL && i < pos){
		no = no->prox;
		i++;
	}
	if(no == NULL) return 0;
	*al = no->dados;
	return 1;
}

int consulta_lista_mat(Lista *li, int mat, struct aluno *al){
	if(li == NULL) return 0;
	Elem *no = *li;
	while (no != NULL && no->dados.matricula != mat){
		no-no->prox;
	}
	if(no == NULL) return 0;
	*al = no->dados;
	return 1;
}