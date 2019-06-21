#include<stdio.h>
#include<string.h>

int main(void) {
  long long x; /* 8 bytes = 64 bits */
  unsigned long long y;
  int d;
  scanf("%lld %llu %d", &x, &y, &d);
  printf("%lld\n%8llu\n%08llu\n%*llu\n%0*llu\n", x, y, y, d, y, d, y);
  return 0;
}

