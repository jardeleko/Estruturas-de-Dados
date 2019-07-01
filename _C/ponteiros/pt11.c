 
 #include <stdio.h>

 int main(void)
 {
     int x = 1;
     int *p_x = &x;    /* p_x aponta para x*/
     int **p_p_x = &p_x;     /* p_p_x aponta para o ponteiro p_x*/

     printf("%d\n", x);   /* Valor da variável*/
     printf("%d\n", *p_x);    /* Valor da variável apontada por p_x*/
     printf("%d\n", **p_p_x);    /* Valor da variável apontada pelo endereço apontado por p_p_x*/
     return 0;
 }
