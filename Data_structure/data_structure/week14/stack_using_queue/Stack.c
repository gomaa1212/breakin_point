#include "Stack.h"
void initial_stack(Stack *ps)
{
    initial_queu(&ps->q);
}
void push(stack_entry value,Stack *ps)
{
    append(value,&ps->q);
    for(int i=0;i<ps->q.Size-1;i++)
    {
        queu_entry temp;
        serve(&temp,&ps->q);
        append(temp,&ps->q);
    }
}
void pop(stack_entry *value,Stack *ps)
{
    if(stack_empty(ps))
    {
        printf("Stack is empty \n");
        return ;
    }
    serve(value,&ps->q);
}
int stack_empty(Stack *ps)
{
    if(ps->q.Size==0)
        return 1;
    return 0;
}
int stack_full(Stack *ps)
{
    return 0;
}
int stack_size(Stack *ps)
{
    return ps->q.Size;
}
void clear_stack(Stack *ps)
{
    clear_queu(&ps->q);
}
void display(stack_entry x)
{
    printf("%d ",x);
}
void traversestack(Stack *ps)
{
    traversequeu(&ps->q,&display);
}
