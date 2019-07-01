#include <stdio.h>

int main (void){
	int mat[6][6];
	int i = 0, j = 0;

	for (i = 1; i<6; i++)
	for (j = 1; j < 6; j++){
		printf("insert into position [%d] [%d]:", i, j);
		scanf("%d", &mat[i][j]);	
		}

	printf("\n");

	for (i = 1; i < 6; ++i)
	for (j = 1; j < 6; ++j){
		printf("matrix [%d] x [%d]: %d\n",i, j, mat[i][j]);
	}
	

	return 0;
}