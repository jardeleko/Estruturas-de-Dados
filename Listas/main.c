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

	delete_date(list, 10);
	printf("\n\n");
	show_all(list);

	List* list2;
	list2 = create_list();
	list2 = insert_list(list2, 20);
	list2 = insert_list(list2, 5);	 
	list2 = insert_list(list2, 2);

	
	printf("se iguais retorna 1 diferente 0: -> %d\n", compare(list, list2));
	free_list(list);
	
	return 0;
}  