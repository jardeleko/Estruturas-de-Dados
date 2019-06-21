#include<stdio.h>
#include<string.h>

int main(void) {
  long long x; /* 8 bytes = 64 bits */
  unsigned long long y;
  scanf("%lld %llu", &x, &y);
  printf("%lld %llu\n", x, y);
  return 0;
}

