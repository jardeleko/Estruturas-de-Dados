#ifndef _Dinamic
#define _Dinamic

struct aluno{
	int matricula;
	char nome[40];
	float n1,n2,n3;
};

typedef struct elemento* Lista;

struct elemento {
	struct aluno dados;
	struct elemento *prox;
}

typedef struct elemento ELem;

Lista * criar_lista(*li)
int insere_lista(Lista* li, struct aluno al);
int insere_lista_final(Lista *li, struct aluno al);
int insere_lista_ordenada(Lista *li, struct aluno al);
int remove_lista_inicio(Lista *li);
int remove_lista_final(Lista *li);
void lista_vazia(Lista *li);
void libera_lista(Lista* li);
int tamanho_lista(Lista *li);
void mostra_lista(Lista* li);

#endif 