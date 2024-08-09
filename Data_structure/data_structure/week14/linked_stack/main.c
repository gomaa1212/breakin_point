#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
void print(stack_entry x)
{
    printf("%d ",x);
}
int main()
{
    Stack s;
    initial_stack(&s);
    push(3,&s);
    push(2,&s);
    push(5,&s);
    printf("%d ",stack_size(&s));
    traversestack(&s,&print);
    return 0;
}

