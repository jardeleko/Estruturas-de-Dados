#include<stdio.h>
#include<string.h>
#include<math.h> /* -lm    -> significa "link math" */

int main(void) {
  int a, b;
  double x;
  scanf("%d %d", &a, &b);
  x = (double)a / b;
  printf("%lf %d %d %lf %d\n",
         x, (int)ceil(x), (int)floor(x), sqrt(x), a % b);
  /* ceil -> teto
     floor -> piso/chão
     sqrt -> raiz quadrada */
  return 0;
}

