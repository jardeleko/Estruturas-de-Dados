#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void) {
  int nota;
  scanf("%d", &nota);
  printf("%c\n", nota >= 60 ? 'A' : 'R');
  return 0;
}

