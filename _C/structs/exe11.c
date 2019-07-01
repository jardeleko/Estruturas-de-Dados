#include <stdio.h>
#include <string.h>

typedef struct {
	int code;
	double n1, n2;
	char name[20];
}student;

int Cadaster(student studani){
	fgets(studani.name, 20, stdin);
	scanf("%d", &studani.code);
	scanf("%lf %lf", &studani.n1, &studani.n2);
	return 1; 
}

void show_all(int code, student studani){
		printf("name:%s\n code:%d \nn1:%.2lf n2:%.2lf meddle:%.2lf\n",
		 studani.name, studani.code, studani.n1,studani.n2,	(studani.n1*.4+studani.n2*.6));
}

int main(void){
	int c;
	student studani, maggie;
	Cadaster(studani);
	printf("mostrar estudante do code:\n");
	scanf("%d", &c);
	show_all(1, studani);
	Cadaster(maggie);
	return 0;
}