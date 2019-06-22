#ifndef _Dinamic
#define _Dinamic

struct aluno{
	int matricula;
	char nome[40];
	double n1,n2,n3;
};


struct elemento {
	struct aluno dados;
	struct elemento *prox;
};

typedef struct elemento* Lista;

typedef struct elemento Elem;

Lista * criar_lista(Lista *li);
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
int consulta_lista_mat(Lista *li, int mat, struct aluno *al);

#endif 