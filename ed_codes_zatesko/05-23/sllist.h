#ifndef _SLLIST
#define _SLLIST

typedef struct _lnode {
  int key;
  struct _lnode *next;
} lnode;

typedef struct {
  lnode *head;
} sllist;

void sllist_init(sllist* l);

int sllist_insert(sllist *l, int key);

void sllist_erase(sllist *l, int key);

void sllist_print(sllist *l);

void sllist_free(sllist *l);

#endif
