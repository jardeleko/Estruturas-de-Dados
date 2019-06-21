#include"sllist.h"
#include<stdlib.h>
#include<stdio.h>

void sllist_init(sllist* l) {
  l->head = NULL;
}

int sllist_insert(sllist *l, int key) {
  lnode *p = malloc(sizeof(lnode));
  if (!p) return 0;
  p->key = key;
  p->next = l->head;
  l->head = p;
  return 1;
}

void sllist_erase(sllist *l, int key) {
  lnode *p, *q;
  for (p = l->head; p != NULL && p->key != key; q = p, p = p->next);
  if (!p) return;
  if (p == l->head) l->head = p->next;
  else q->next = p->next;
  free(p);
}

void sllist_print(sllist *l) {
  lnode *p;
  for (p = l->head; p != NULL; p = p->next)
    printf("%s%d", p == l->head ? "" : " ", p->key);
  printf("\n");
}

void sllist_free(sllist *l) {
  lnode *p, *q;
  for (p = l->head; p != NULL; p = q) {
    q = p->next;
    free(p);
  }}

