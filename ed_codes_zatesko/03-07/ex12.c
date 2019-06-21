#include<stdio.h>
#include<string.h>

int main(void) {
  int a, b;
  double x;
  scanf("%d %d", &a, &b); /* a = 5  b = 2 */
  x = a / b;
  printf("%lf\n", x); /* x = 2 */
  return 0;
}

