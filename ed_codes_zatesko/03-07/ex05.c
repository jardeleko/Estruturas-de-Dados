#include<stdio.h>
#include<string.h>

int main(void) {
  char str[100];
  fgets(str, 100, stdin);
  str[strlen(str) - 1] = '\0';
  printf("%s %lu\n", str, strlen(str)); /* %lu -> long unsigned int */
  return 0;
}

