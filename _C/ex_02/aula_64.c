#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	struct date{
		int mm,dd,YY;	
	};

	struct date date_,*today, *yesterday, *tomorrow;
	yesterday = &date_;

	today->mm = 06;
	today->dd = 16;
	today->YY = 2019;

	tomorrow->mm = 06 + 1;
	tomorrow->dd = 16 + 1;
	tomorrow->YY = 2019;

	yesterday->mm = 06 - 1;
	yesterday->dd = 16 - 1;
	yesterday->YY = 2019;

	printf("%d:%d:%d\n", today->mm, today->dd, today->YY);
	printf("%d:%d:%d\n", yesterday->mm, yesterday->dd, yesterday->YY);
	printf("%d:%d:%d\n", tomorrow->mm, tomorrow->dd, tomorrow->YY);

	getchar();
	return 0;
}