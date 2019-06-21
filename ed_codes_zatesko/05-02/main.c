#include<stdio.h>
#include<stdlib.h>

int main(void) {
  struct student {
    int p1, p2;
    char *nome;
  } x;
  int n;
  char c;
  scanf("%d %d ", &x.p1, &x.p2);
  x.nome = NULL; n = 0;
  while ((c = getchar()) != '\n') {
    x.nome = (char *)realloc(x.nome, (++n) * sizeof(char));
    x.nome[n - 1] = c;
  } /* */
  printf("%s %d %d\n", x.nome, x.p1, x.p2);
  return 0;
}
