#include"stack.h"
#include<stdlib.h>

void stack_init(stack *s) {
  s->top = NULL;
}

int push(stack *s, int key) {
  snode *p = malloc(sizeof(snode));
  if (!p) return 0;
  p->key = key;
  p->next = s->top;
  s->top = p;
  return 1;
}

int pop(stack *s) {
  int ret;
  snode *p = s->top;
  if (!p) return -1;
  ret = p->key;
  s->top = p->next;
  free(p);
  return ret;
}

void stack_free(stack *s) {
  while (s->top != NULL) pop(s);
}

