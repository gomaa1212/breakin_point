#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int main()
{
    Stack s;
    initial_stack(&s);
    push(1,&s);
    push(2,&s);
    push(3,&s);
    //traversestack(&s);
    clear_stack(&s);
    printf("%d",stack_size(&s));
    return 0;
}
