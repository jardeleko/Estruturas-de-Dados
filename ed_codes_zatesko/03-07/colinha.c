/* ATENÇÃO! ESTE CÓDIGO NÃO COMPILA PORQUE POSSUI VÁRIAS FUNÇÕES main()
   Para compilar, escolha a função main() que você quiser e comente
     todas as outras */

#include<stdio.h>
#include<string.h>
#include<math.h>

#define MAX 100
#define EPS 1e-9

int main(void) {
  int x;
  scanf("%d", &x);
  printf("%d\n", x);
  return 0;
}

int main(void) {
  char x;
  scanf("%c", &x);
  printf("%c\n", x);
  return 0;
}

int main(void) {
  int x;
  x = getchar();
  printf("%d\n", x);
  return 0;
}

int main(void) {
  unsigned int x;
  scanf("%u", &x);
  printf("%u\n", x);
  return 0;
}

int main(void) {
  long long x;
  scanf("%lld", &x);
  printf("%lld\n", x);
  return 0;
}


int main(void) {
  unsigned long long x;
  scanf("%llu", &x);
  printf("%llu\n", x);
  return 0;
}

int main(void) {
  unsigned long long x;
  scanf("%llu", &x);
  printf("%8llu\n%08llu\n", x, x);
  return 0;
}

int main(void) {
  unsigned long long x;
  int d;
  scanf("%llu %d", &x, &d);
  printf("%*llu\n%0*llu\n", d, x, d, x);
  return 0;
}

int main(void) {
  double x;
  scanf("%lf", &x);
  printf("%lf\n%.8lf\n", x, x);
  return 0;
}

int main(void) {
  double x; int d;
  scanf("%lf %d", &x, &d);
  printf("%lf\n%.*lf\n", x, d, x);
  return 0;
}

int main(void) {
  long double x;
  scanf("%Lf", &x);
  printf("%Lf\n", x);
  return 0;
}

int main(void) {
  int a, b;
  double x;
  scanf("%d %d", &a, &b);
  x = (double) a / b;
  printf("%d %d %lf %lf\n", a / b, a % b, x, sqrt(x));
  return 0;
}

int main(void) {
  int x;
  scanf("%d", &x);
  if (x >= 60) printf("A\n");
  else printf("R\n");
  return 0;
}

int mdc(int a, int b) {
  if (b == 0) return a;
  return mdc(b, a % b);
}

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", mdc(a, b));
  return 0;
}

int main(void) {
  int x;
  scanf("%d", &x);
  printf("%c\n", x >= 60 ? 'A' : 'R');
  return 0;
}

int main(void) {
  int a, b;
  double x, y;
  scanf("%d %d", &a, &b);
  x = (double) a / b;
  y = sqrt(x);
  y *= y;
  if (x == y) printf("%lf == %lf\n", x, y);
  else printf("%lf != %lf\n", x, y);
  return 0;
}

int main(void) {
  int a, b;
  double x, y;
  scanf("%d %d", &a, &b);
  x = (double) a / b;
  y = sqrt(x);
  y *= y;
  printf("%lf %c= %lf\n", x, fabs(x - y) > EPS ? '!' : '=', y);
  return 0;
}

int main(void) {
  int v[10], i, soma;
  for (i = 0; i <= 9; i++)
    scanf("%d", &v[i]);
  soma = 0;
  for (i = 0; i <= 9; i++)
    soma += v[i];
  printf("%c\n", soma >= 60 ? 'A' : 'R');
  return 0;
}

int main(void) {
  int v[MAX], i, soma;
  char nome[MAX];
  fgets(nome, 100, stdin);
  nome[strlen(nome) - 1] = '\0';
  for (i = 0; i <= 9; i++)
    scanf("%d", &v[i]);
  soma = 0;
  for (i = 0; i <= 9; i++)
    soma += v[i];
  printf("%s foi %s\n", nome, soma >= 60 ? "aprovado" : "reprovado");
  return 0;
}

int main(void) {
  int soma, nota, n;
  char nome[MAX];
  fgets(nome, MAX, stdin);
  nome[strlen(nome) - 1] = '\0';
  soma = 0; n = 0;
  while (scanf("%d", &nota) != EOF) {
    soma += nota;
    n++;
  }
  printf("%s foi %s\n",
         nome, (double)soma / n > 60 - EPS ? "aprovado" : "reprovado");
  return 0;
}

int main(void) {
  int soma, nota, n;
  char nome[MAX], linha[MAX];
  fgets(nome, MAX, stdin);
  nome[strlen(nome) - 1] = '\0';
  soma = 0; n = 0;
  while (1) {
    fgets(linha, MAX, stdin);
    linha[strlen(linha) - 1] = '\0';
    if (!strcmp(linha, "--")) break;
    sscanf(linha, "%d", &nota);
    soma += nota; n++;
  }
  printf("%s foi %s\n",
         nome, (double)soma / n > 60 - EPS ? "aprovado" : "reprovado");
  return 0;
}

int main(void) {
  int soma, nota, n, teste;
  char nome[MAX], linha[MAX];
  double media;
  fgets(nome, MAX, stdin);
  nome[strlen(nome) - 1] = '\0';
  soma = 0; n = 0;
  do {
    fgets(linha, MAX, stdin);
    linha[strlen(linha) - 1] = '\0';
    teste = strcmp(linha, "--");
    if (teste) {
      sscanf(linha, "%d", &nota);
      soma += nota; n++;
    }
  } while (teste);
  media = (double) soma / n;
  printf("%s foi %s com media %lf\n",
         nome, media > 60 - EPS ? "aprovado" : "reprovado", media);
  return 0;
}
