#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaDinEncad.h"

int criar_aluno(struct aluno al){
	scanf(" %s", al.nome);		
	scanf(" %lf %lf %lf", &al.n1, &al.n2, &al.n3);
	scanf(" %d", &al.matricula);
	if(al) return 1;
	else return 0;
}

int main(void){
	char oi;
	Lista *li;
	criar_lista(li);
	struct aluno al;

while(scanf(" %c", &oi) != EOF){
	switch(oi){
		case 'i':
			criar_aluno(al);
			insere_lista(li, al);			  	
			break;
		case's': 
			tamanho_lista(li); 
			break;
		case'f':
		/*limpa toda lista*/
			libera_lista(li);
			break;

		}
	}
	getchar();
	return 0;
}

/*
struct aluno{
	int matricula;
	char nome[40];
	float n1,n2,n3;
};

int insere_lista(Lista* li, struct aluno al);
int insere_lista_final(Lista *li, struct aluno al);
int insere_lista_ordenada(Lista *li, struct aluno al);
int remove_lista_inicio(Lista *li);
int remove_lista_final(Lista *li);
int remove_lista(Lista *li, int mat);
int lista_vazia(Lista *li);
void libera_lista(Lista* li);
int tamanho_lista(Lista *li);
int consulta_lista_pos(Lista *li, int pos, struct aluno *al);
int consulta_lista_mat(Lista *li, int mat, struct aluno *al);*/