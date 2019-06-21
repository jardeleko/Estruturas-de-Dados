#include <stdio.h>
#include <stdlib.h>
#include "ex04.h"

int main (void){
	int i;
	char op;
	stack *s;
	stack_empty(&s);

	while(scanf(" %c", &op) != EOF){
		switch(op){
			case 'a':
				scanf("%d", &i);
				push(&s, i);

				break;
			case 'b':
				if(s) pop(&s);
				break;

			case 'c':
				show(&s);
				break;
			default:
				printf("Não foi implementado\n");
				exit(1);
		}
	}

	stack_free(&s);
	getchar();
	return 0;
}