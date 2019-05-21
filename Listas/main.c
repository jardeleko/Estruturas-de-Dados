#include <stdio.h>
#include "lista.h"

int main(void){
	
	List* list;
	list = create_list();
	if(check(list)) printf("Nenhum elemento na lista!\n");
	else printf("contém elementos!\n");	
	list = insert_list(list, 10);
	list = insert_list(list, 20);
	list = insert_list(list, 5);	 
	list = insert_list(list, 2);
	list = insert_list(list, 7);
	show_all(list);		

	int aux = 25;

	if(!check(list)) printf("Esta lista contém elementos\n");
	else printf("Esta vazia!\n");

	if(search(list, aux) == NULL) 
		printf("Elemento não encontrado\n");
	else
		printf("Encontrou elemento %d\n", aux);
	
	return 0;
}