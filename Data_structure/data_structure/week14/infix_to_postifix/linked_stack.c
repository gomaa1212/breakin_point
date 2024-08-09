
#include <stdio.h>
#include "linked_stack.h"
void initial_stack(Stack *ps)
{
    ps->top=NULL;

}
void push(stack_entry value,Stack *ps)
{
    stacknode *p=(stacknode*)malloc(sizeof(stacknode));
    p->entry=value;
    p->next=ps->top;
    ps->top=p;
}
void pop(stack_entry *value,Stack *ps)
{
    if(stack_empty(ps))
    {
        printf("stack is empty \n");
        return ;
    }
    stacknode *p;
    *value=ps->top->entry;
    p=ps->top;
    ps->top=ps->top->next;
    free(p);
}
int stack_empty(Stack *ps)
{
    return ps->top==NULL;
}
int stack_full(Stack *ps)
{
    return 0;
}
void clear_stack(Stack *ps)
{
    stacknode *p;
    while(ps->top!=NULL)
    {
        p=ps->top;
        ps->top=ps->top->next;
        free(p);
    }
}
void traversestack(Stack *ps,void (*pf)(stack_entry))
{
    stacknode *p=ps->top;
    while(p)
    {
        (*pf)(p->entry);
        p=p->next;
    }
}
int stack_size(Stack *ps)
{
    stacknode *p=ps->top;
    int size=0;
    while(p)
    {
        size++;
        p=p->next;
    }
    return size;
}
char stack_top(Stack *ps)
{
     char top=ps->top->entry;
    return top;
}

