#include <stdio.h>
#include <stdlib.h>
#include "date.h"

int main (void){
	int op;
	int value;
	my_date dt;

	date_init(&dt);
	while(scanf("%d", &op) != EOF){
		switch(op){
			case '1':
				/*do stuff*/
				scanf("%d", &value);
				date_insert(&dt, value);
				break;
			case '2':
				scanf("%d", &value);
				date_erase(&dt, value);			
				break;
			case '3':
				show_date(&dt);
				break;
			default:
				printf("not inplemented yet\n");
				
		}
	}

}