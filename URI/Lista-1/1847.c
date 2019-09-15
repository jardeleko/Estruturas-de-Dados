#include <stdio.h>
int main (void){
	int A = 0, B = 0, C = 0;
	scanf("%d %d %d", &A, &B, &C);
		if (A == B){ 
			if(B > C) printf(":(\n");
			else printf(":)\n");
		}
		else{  
			if(A > B){	
				if(B > C){ 
					if(B - C > A - B) printf(":(\n");
					else printf(":)\n");
				} 
				else {
					printf(":)\n");
				}
			}else{ 
				if (B - A > C - B) printf(":(\n");
				else if (C - B > B - A) printf(":)\n");
				else printf(":(\n");
			}

		}	
	return 0;
			
}