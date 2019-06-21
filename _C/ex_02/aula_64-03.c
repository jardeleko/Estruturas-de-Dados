#include <stdio.h>

	struct list{
		int key;
		struct list *next;
	};

struct list *binary_search(struct list *l, int key){
	while(l != NULL){
		if(l->key == key) return l;
		l = l->next;
	}
	return 0;
}

int main (void){
	struct list m1, m2, m3, m4, m5;
	struct list  *result, *_get = &m1;
	int  search;

	m1.key = 10;
	m2.key = 20;
	m3.key = 40;
	m4.key = 50;
	m5.key = 70;

	m1.next = &m2;
	m2.next = &m3;
	m3.next = &m4;
	m4.next = &m5;
	m5.next = NULL;

	scanf("%d", &search);

	result = binary_search(_get, search);

	if (result) printf("%d \n", result->key);
	if(!result) printf("Não encontrou\n");

	getchar();
	return 0;
}