#ifndef EXE_02
#define EXE_02
#define MAX 100

struct student{
	int index;
	char name[30];
	float n1, n2, n3;
};

typedef struct list List;

struct list{
	int qtd;
	struct student date[MAX];
}

List* list_initialize();

void list_free(List * li);

int list_lenght(List *li);

int list_full(List *li);

int insert_list(List *li);

int insert_list_finaly(List *li, struct student al);

int insert_list_init(List *li, struct student al);

int insert_list_order(List *li, struct student al);

#endif 