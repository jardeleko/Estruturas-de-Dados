typedef struct list List; 

/*funct create list*/
List* create_list();

/*insertion list*/
List* insert_list(List* l, int i);

/* funct check list*/
int check(List* l);

/*funct show list*/
void show_all(List* l);

List* search(List* l, int value);

