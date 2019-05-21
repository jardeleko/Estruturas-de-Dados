#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(void){

	Stack* p;

	p = create_stack();
	push(p, 5);
	push(p, 10);
	push(p, 16);
	push(p, 25);
	/*Como a pilha funciona em LIFO (last in, first out)
	o ultimo a entrar é minha head p=25.00*/

	printf("last in -> %.2lf\n", head(p));
	pop(p); /*agora 16*/
	printf("last in -> %.2lf\n", head(p));
	pop(p); /*agora 10*/
	printf("last in -> %.2lf\n", head(p));
	pop(p); /*agora 5*/
	printf("last in -> %.2lf\n", head(p));		
	pop(p); /*agora vazio*/
	printf("last in -> %.2lf\n", head(p));	
	return 0;
}