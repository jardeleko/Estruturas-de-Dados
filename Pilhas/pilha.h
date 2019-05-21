 typedef struct stack Stack;

/*criando a pilha*/

Stack* create_stack();

void push(Stack* p, double v);
double pop(Stack* p);
int check(Stack* p);
double head(Stack* p);
void free_stack(Stack* p);


