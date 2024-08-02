#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Stack.h"
int main()
{
    Stack s;
    initial_stack(&s);
    for(int i=0;i<10;i++)
    {
        push(i,&s);
    }

    return 0;
}
