typedef struct list List; 

/*criando a lista*/
List* create_list();

/*inserindo*/
List* insert_list(List* l, int i);

/*checando se existem valores*/
int check(List* l);

/*mostrando todos os dados*/
void show_all(List* l);

/*pesquisando o value em O(n)*/
List* search(List* l, int value);

/*apagando o value*/
List* delete_date(List* l, int value);

/*Liberando a lista*/
void free_list(List* l);

/*comparando listas*/
int compare(List* l1, List* l2);

