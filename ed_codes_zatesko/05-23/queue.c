#include"queue.h"
#include<stdlib.h>

void queue_init(queue *q) {
  q->begin = q->end = NULL;
}

int enqueue(queue *q, int key) {
  qnode *p = malloc(sizeof(qnode));
  if (!p) return 0;
  p->key = key;
  if (q->begin) q->end = q->end->next = p;
  else q->begin = q->end = p;
  p->next = NULL;
  return 1;
}

int dequeue(queue *q) {
  int ret;
  qnode *p = q->begin;
  if (!p) return -1;
  ret = p->key;
  q->begin = p->next;
  if (q->end == p) q->end = NULL;
  free(p);
  return ret;
}

void queue_free(queue *q) {
  while (q->begin != NULL) dequeue(q);
}
