#include "queue.h"
#include <stdlib.h>

void queue_init(queue *q) { /*aterrar fila*/
	q->begin = q->end = NULL;
}

int enqueue(queue *q, int key){
	qnode *p = malloc(sizeof(qnode)); /*aloca a fila*/
	if(!p) return 0; /*return se der erro no malloc*/
	p->key = key; /*inicia com um valor*/
	if(q->begin) q->end = q->end->next = p; /*se existe inicio o q aponta o valor de p pro final da estrutura*/
	else q->begin = q->end = p; /*senão o inicio recebe o fim e o fim é a estrutura ou no caso quer dizer que só tem um elemento*/
	p->next = NULL; 
	return 1;
}

int dequeue(queue *q){
	int ret;
	qnode *p = q->begin; /*p recebe o inicio*/
	if(!p) return -1; /*se não existir retorna -1*/
	ret = p->key; /*auxiliar recebe a chave que vai sair pra retornar*/
	q->begin = p->next; /*inicio recebe o p->proximo*/
	if(q->end == p) q->end = NULL; /*se fim for o valor de p passado sai o ultimo valor*/ 
	free(p); /*libera p*/
	return ret; /*retorna fila*/
}

void queue_free(queue *q){
	while(q->begin != NULL) dequeue(q); 
}