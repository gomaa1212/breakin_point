#include "Stack.h"
void initial_stack(Stack *ps)
{
    ps->top=-1;
}
void push(char value,Stack *ps)
{
    if(ps->top==max_size-1)
    {
        printf("Stack is full \n");
    }
    else
    {
        ps->top++;
        ps->arr[ps->top]=value;
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
char pop(Stack *ps)
{
    if(!stackempty(ps))
    {
        return ps->arr[ps->top--];
    }
    return '\0';
}
int ismatch(char value1,char value2)
{
    if(value1=='('&&value2==')')
        return 1;
    if(value1=='{'&&value2=='}')
        return 1;
    if(value1=='['&&value2==']')
        return 1;
    return 0;
}
int check(char *strg)
{
    int l=strlen(strg);
    Stack s;
    initial_stack(&s);
    for(int i=0;i<l;i++)
    {
        if(strg[i]=='('||strg[i]=='{'||strg[i]=='[')
            {
                push(strg[i],&s);
            }
            else if(strg[i]==')'||strg[i]=='}'||strg[i]==']')
            {
                char open=pop(&s);
                if(!ismatch(open,strg[i]))
                    return 0;
            }
    }
    return stackempty(&s);
}

