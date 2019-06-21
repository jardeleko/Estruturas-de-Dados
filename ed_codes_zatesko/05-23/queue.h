#ifndef _QUEUE
#define _QUEUE

typedef struct _qnode {
  struct _qnode *next;
  int key;
} qnode;

typedef struct {
  qnode *begin, *end;
} queue;

void queue_init(queue *q);

int enqueue(queue *q, int key);

int dequeue(queue *q);

void queue_free(queue *q);

#endif
