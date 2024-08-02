#include "Stack.h"
void initial_stack(Stack *ps)
{
    if(ps==NULL)
    {
        printf("Invalid data");
    }
    else
        ps->top=-1;
}
void push(int value,Stack *ps)
{
    if(ps==NULL)
    {
        printf("Invalid data\n");
    }
    if(ps->top==max_size-1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        ps->top++;
        ps->arr[ps->top]=value;

    }
}
int stackfull(Stack ps)
{
    if(ps.top==max_size-1)
    {
        return 1;
    }
    return 0;
}
void pop(int *valu,Stack *ps)
{
    if(ps==NULL)
    {
        printf("invalid data\n");
    }
    if(ps->top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        *valu=ps->arr[ps->top--];
    }
}
int stackempty(Stack *ps)
{
    if(ps->top==-1)
    {
        return 1;
    }
    return 0;
}
int stacktop(Stack *ps)
{
    if(!stackempty(ps))
    {
        return ps->arr[ps->top];
    }
    else
    {
        printf("Stack is empty\n");
        return 0;
    }
}
int stacksize(Stack *ps)                        //a function to return the size of a stack
{
    return ps->top+1;
}
void destroystack(Stack *ps)             //a function to destroy a stack.
{
    ps->top=-1;
}
void transversestack(Stack *ps)
{
    for(int i=ps->top;i>=0;i--)
    {
        printf("%d\n",ps->arr[i]);
    }
}
int first_element(Stack *ps)          //a function that returns the first element in a stack.
{
    if(!stackempty(ps))
    {
        return ps->arr[0];
    }
    else
    {
        printf("stack is empty");
        return 0;
    }
}
void copy_stack(Stack *ps1,Stack *ps2)            // a function to copy a stack to another.
{
    for(int i=0;i<=ps2->top;i++)
    {
        push(ps2->arr[i],ps1);
    }
}
int min_stack(Stack *ps)
{
    if(!stackempty(ps))
    {
        int min=ps->arr[0];
        for(int i=1;i<=ps->top;i++)
        {
            if(min>ps->arr[i])
            {
            min=ps->arr[i];
            }
        }
    return min;
    }
    else
    {
        printf("stack is empty");
        return 0;
    }
}
