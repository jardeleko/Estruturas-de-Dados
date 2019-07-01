#include <stdio.h>
#include <errno.h>
#include <stddef.h>

int main(void){
	int *p, a;
	a = 5;
	*p = NULL;
	p = &a;

	if(!p) return -EPERM;

	printf("END a disposição: %p\n", p);
	*p = a;

	return 0;
}