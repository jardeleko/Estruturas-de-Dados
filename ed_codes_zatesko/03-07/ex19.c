#include<stdio.h>
#include<string.h>
#include<math.h>

#define EPS 1e-9 /* 10^-9 (constante de ponto flutuante) */
#define MAX 100

int main(void) {
  char linha[MAX];
  int ret, nota, soma = 0;
  do {
    fgets(linha, MAX, stdin);
    linha[strlen(linha) - 1] = '\0';
    ret = strcmp(linha, "--"); /* retorna 0 quando as strings são iguais */
    if (ret) { /* é porque as strings são diferentes! */
      sscanf(linha, "%d", &nota);
      soma += nota;
    }
  } while (ret);
  printf("%d\n", soma);
  return 0;
}

