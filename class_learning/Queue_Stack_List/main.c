#include "sllist.h"
#include "stack.h"
#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

int main (void){
	char op;
	sllist l;
	stack s;
	queue q;

	int i; 
	sllist_init(&l); /*aterrando a lista l na função inicial*/ 
	stack_init(&s); /*enviando a pilha para aterrar*/
	queue_init(&q); /*aterrando pilha*/

	while(scanf(" %c", &op) != EOF){ 
		switch(op){ /*switch para as opções de entrada do sistema*/
			case 'i': /*caso 1 insere na lista l a valor(key) i*/
				scanf("%d", &i); /*push lista*/
				sllist_insert(&l, i);
				break;
			case 'e': /* caso 2 apaga da lista o valor i passado para key*/
				scanf("%d", &i); /*pop lista*/
				sllist_erase(&l, i);
				break;
			case 'p': /*caso 3 mostra a lista*/ 
				sllist_print(&l); /*print lista*/
				break;	
			case 'o': /*pop*/
				if(s.top) /*Se existe topp*/
				printf("%d\n", pop(&s)); /*apaga e mostra o que saiu*/
				break;
			case 'u': /*push*/
				scanf("%d", &i); 
				push(&s, i); /*envia pra inseri na pilha*/
				break;
			case 'n': /*enqueue*/
				scanf("%d", &i);
				enqueue(&q, i);
				break;
			case 'd': /*dequeue*/
				if(q.begin) /*se existe um inicio*/
					printf("%d\n", dequeue(&q));
				break;
			default :
				printf("Invalid grade \n"); /*para valores invalidos*/
		}
	}

	sllist_free(&l); 	
	stack_free(&s);	
	queue_free(&q);
	return 0;

}