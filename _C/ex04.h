#ifndef STACK_CORMEN
#define STACK_CORMEN

 typedef struct stack_node{
	int key;
	struct stack_node *next;
}snode;

typedef struct {
	snode *heap;
}stack;


int stack_empty(stack *s);

int push(stack *s, int value);

int pop(stack *s);

void show(stack *s);

void stack_free(stack *s);

#endif