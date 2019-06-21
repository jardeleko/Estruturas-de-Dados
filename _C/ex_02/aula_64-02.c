#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	struct date{
		int *mm;
		int *dd;
		int *YY;	
	};

	struct date _date;

	int monNow = 06, dayNow = 16, yearNow = 2019;
	_date.mm = &monNow;
	_date.dd = &dayNow;
	_date.YY = &yearNow;

	printf("date %d:%d:%d\n", *_date.mm, *_date.dd, *_date.YY );
	getchar();
	return 0;
}