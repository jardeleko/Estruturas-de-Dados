#include "date.h"
#include <stdio.h>
#include <stdlib.h>

void date_init(my_date *dt){
	dt->head = NULL;
}

int date_insert(my_date *dt, int value){
	dt_date *p = malloc(sizeof(dt_date));
	p->value = value;
	p->next = dt->head;
	dt->head = p;
	return 1;
}

int date_erase(my_date *dt, int key){
	dt_date *p, *q;
	for (p = dt->head; p != NULL && ->value != value; q = p, p = p->next);	
	if(!p) return ;
	if (p == dt-> head)	l->head = p->next;
	else q->next = p->next;
	free(p);
}

void show_date(my_date *dt){
	dt_date *p;
	for (p = dt->head; p != NULL; p = p->next)
		printf("%s%d", p == dt->head ? "" : " ", p->value);
	printf("\n");
}

void date_free(my_date *l){
	dt_date *p, *q;
	for (p = l->head; p != NULL; p = q) {
		q = p->next;
		free(p);
	}
	
}