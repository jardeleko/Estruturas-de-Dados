#include<stdio.h>

int main(void) {
  int v[5], i, *p;
  for (i = 0; i < 5; i++) scanf("%d", &v[i]);
  p = &v[2];
  p++;
  printf("%d\n", *p);
  p = (int *)((char *)p + 1);
  printf("%d\n", *p);
  return 0;
}
