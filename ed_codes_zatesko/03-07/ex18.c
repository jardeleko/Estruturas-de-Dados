#include<stdio.h>
#include<string.h>
#include<math.h>

#define EPS 1e-9 /* 10^-9 (constante de ponto flutuante) */
#define MAX 100

int main(void) {
  int notas[MAX], i, n;
  scanf("%d", &n);
  for (i = 0; i < n; i++) scanf("%d", &notas[i]);
  for (i = n - 1; i >= 0; i--)
    printf("%s%d", i < n - 1 ? " " : "", notas[i]);
  printf("\n");
  return 0;
}

