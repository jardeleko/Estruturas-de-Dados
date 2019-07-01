#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[40];
	int age;
	double salary;
} People;

People empoyee[11];


void init();
int insert();
void show_all();

void init(){
	int i;
	for (i = 0; i < 11; ++i){
		strcpy(empoyee[i].name, "NULL");
		empoyee[i].age = 0;
		empoyee[i].salary = 0;
	}

}

int insert(int new){
	int i, count = new;
	if(new <= 11 && empoyee[11].name != NULL){
		for (i = 0; i < count; ++i){
			printf("Nome:\n");
			scanf("%s", empoyee[i].name);
			printf("idade:\n");			
			scanf("%d", &empoyee[i].age);
			printf("salario:\n");			
			scanf("%lf", &empoyee[i].salary);
		}
		return 1;
	}
	else return -1;
}

void show_all(){
	int i;

	for (i = 0; i < sizeof(empoyee[i]); ++i){
		if(empoyee[i].name == NULL || empoyee[i].age == 0){
			return;
			break;
			exit(1);
		}else{	
			printf("People: %s\n", empoyee[i].name);
			printf("Age: %d\n", empoyee[i].age);
			printf("Salary: %.2lf\n", empoyee[i].salary);	
		}
	}
	printf("Nenhum funcionario cadastrado\n");
}
int main (void){
	int i;
	char op;
	init();

	while(scanf(" %c", &op) != EOF){
		switch(op){
			case '1':
				printf("quantos funcionarios inserir:\n");
				scanf("%d", &i);
				insert(i);
				break;
			case '2':
				show_all();
				break;
			default:
				printf("err\n");
				exit(1);		
		}
	}
	return 0;
}