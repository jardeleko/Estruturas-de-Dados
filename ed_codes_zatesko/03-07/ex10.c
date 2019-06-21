#include<stdio.h>
#include<string.h>

int main(void) {
  double x; /* float -> NUNCA USAR!! NUNCA ESQUECER DE NUNCA USAR!! */
  int d;
  scanf("%lf %d", &x, &d);
  printf("%.*lf\n", d, x);
  return 0;
}

