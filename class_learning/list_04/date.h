#ifndef _DATE
#define _DATE

typedef struct dt_date{
	int value;
	struct dt_date *next;
} dt_date;

typedef struct {
	unsigned int dd, mm, yyyy;
	dt_date *head;
} my_date;

void date_init(my_date *dt);

int date_init(my_date *dt, int value);

int date_erase(my_date *dt, int key);

void show_date(my_date *dt);

void date_free(my_date *l);

#endif