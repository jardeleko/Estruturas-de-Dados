#include<stdio.h>
#include<string.h>
#include<math.h> /* -lm    -> significa "link math" */

int main(void) {
  int nota;
  scanf("%d", &nota);
  if (nota >= 60) printf("A\n");
  else printf("R\n");
  return 0;
}

