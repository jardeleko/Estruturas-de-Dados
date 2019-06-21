#include<stdio.h>

int func(int *p) {
  p++;
  *p = 42;
  return *p;
}

int main(void) {
  int v[] = {1, 2, 3, 4, 5},  i;
  char s[] = "Bettina", *p;
  scanf("%d", v + 1);
  for (i = 0; i < 5; i++) printf(" %d", v[i]);
  printf("\n");
  printf("%d\n", func(v));
  printf("%d\n", *v);
  for (i = 0; i < 5; i++) printf(" %d", v[i]);
  printf("\n");
  for (p = s; *p; p++) printf("%c", *p);
  printf("\n");
  return 0;
}
