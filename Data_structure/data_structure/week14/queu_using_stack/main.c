#include <stdio.h>
#include <stdlib.h>
#include "queu_using_stack.h"
int main()
{
    queu q;
    initial_queu(&q);
    append(1,&q);
    append(2,&q);
    append(3,&q);
    int x;
    serve(&x,&q);
    serve(&x,&q);
    printf("%d",x);
    return 0;
}
