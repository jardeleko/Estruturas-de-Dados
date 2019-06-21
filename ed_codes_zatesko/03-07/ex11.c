#include<stdio.h>
#include<string.h>

int main(void) {
  long double x; /* long double = 10 bytes */
  int d;
  scanf("%Lf %d", &x, &d);
  printf("%.*Lf\n", d, x);
  return 0;
}

