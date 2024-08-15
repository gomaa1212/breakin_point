#include <stdio.h>
#include <stdlib.h>
#include "linked_stack.h"
#include <string.h>
int main()
{
    char infix[20];
    printf("enter infix expression : ");
    gets(infix);
    char postifix[20];
    intoprefix(infix,postifix);
    printf(" postifix = %s",postifix);


    return 0;
}
int precedence(char ch)
{
    switch (ch)
    {
    case '^':
        return 3;
    case '*':
    case '/':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        return 0;
    }
}

void intoprefix(char infix[],char postifix[])
{
    Stack s;
    initial_stack(&s);
    char ch,top;
    int j=0;
    for(int i=0;i<strlen(infix);i++)
    {
        ch=infix[i];
        switch(ch)
        {
        case '(':
            push(ch,&s);
            break;

        case ')':
            pop(&top,&s);
            while(top!='(')
            {
                postifix[j]=top;
                j++;
                pop(&top,&s);
            }
            break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
            while(!stack_empty(&s)&&precedence(stack_top(&s))>=precedence(ch))
            {
                pop(&top,&s);
                postifix[j]=top;
                j++;

            }
            push(ch,&s);
            break;
        default :
            postifix[j]=ch;
            j++;
            break;
        }
    }
    while (!stack_empty(&s))
    {
        pop(&top, &s);
        postifix[j] = top;
        j++;
    }
    postifix[j] = '\0';
}
