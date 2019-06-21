#include<stdio.h>
#include<string.h>
#include<math.h>

#define EPS 1e-9 /* 10^-9 (constante de ponto flutuante) */

int main(void) {
  int a, b;
  double x, y;
  scanf("%d %d", &a, &b);
  x = (double) a / b;
  y = sqrt(x);
  y *= y;
  printf("%lf %c= %lf\n", x, fabs(x - y) < EPS ? '=' : '!' , y);
  return 0;
}

