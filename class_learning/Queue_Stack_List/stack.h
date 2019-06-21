#ifndef _STACK
#define _STACK

typedef struct _snode {
	int key;
	struct _snode *next;
} snode;

typedef struct {
	snode *top;
} stack;

void stack_init(stack *s);

int push(stack *s, int key);

int pop(stack *s);

void stack_free(stack *s);

#endif 
