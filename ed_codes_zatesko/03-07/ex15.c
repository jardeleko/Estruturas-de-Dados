#include<stdio.h>
#include<string.h>
#include<math.h>

int mdc(int a, int b) { /* máximo divisor comum */
  if (b == 0) return a;
  return mdc(b, a % b); /* RECURSÃO */
}


int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", mdc(a, b));
  return 0;
}

