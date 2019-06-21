#include<stdio.h>
#include<stdlib.h>

int main(void) {
  int *p, n, m, i;
  scanf("%d", &n);
  p = (int *)malloc(n * sizeof(int));
  for (i = 0; i < n; i++)
    scanf("%d", p + i);
  for (i = 0; i < n; i++)
    printf(" (%d %d)", *(p + i), p[i]);
  printf("\n");
  scanf("%d", &m);
  p = realloc(p, (n + m) * sizeof(int));
  for (i = n; i < n + m; i++)
    scanf("%d", &p[i]);
  for (i = 0; i < n + m; i++)
    printf(" %d", p[i]);
  printf("\n");
  free(p);
  return 0;
}

