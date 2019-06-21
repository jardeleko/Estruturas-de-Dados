#include<stdio.h>
#include"sllist.h"
#include"stack.h"
#include"queue.h"

int main(void) {
  char op;
  sllist l;
  stack s;
  queue q;
  int i;
  sllist_init(&l);
  stack_init(&s);
  queue_init(&q);
  while (scanf(" %c", &op) != EOF)
    switch (op) {
    case 'i':
      scanf("%d", &i);
      sllist_insert(&l, i);
      break;
    case 'e':
      scanf("%d", &i);
      sllist_erase(&l, i);
      break;
    case 'p':
      sllist_print(&l);
      break;
    case 'o': /* pop */
      if (s.top)
        printf("%d\n", pop(&s));
      break;
    case 'u': /* push */
      scanf("%d", &i);
      push(&s, i);
      break;
    case 'n': /* enqueue */
      scanf("%d", &i);
      enqueue(&q, i);
      break;
    case 'd': /* dequeue */
      if (q.begin)
        printf("%d\n", dequeue(&q));
    }
  sllist_free(&l);
  stack_free(&s);
  queue_free(&q);
  return 0;
}
