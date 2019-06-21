#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncad.h"

int main(void){

	int i;
	char oi;
	Lista *li;
	criar_lista(&li);

	switch(oi){
		case's': 
			int x = tamanho_lista(&li); 
			break;
		case'l':
		/*limpa toda lista*/
			libera_lista(&li);
			break;
		default:
			exit(1);
	}
	getchar();
	return 0;
}