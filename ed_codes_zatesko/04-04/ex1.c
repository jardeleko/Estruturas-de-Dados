#include<stdio.h>

int main(void) {
  int i = 0xbabaca;
  int *p, **q;
  p = &i;
  q = &p;
  printf("%d %p %p\n", i, p, q);
  return 0;
}
