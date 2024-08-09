#include <stdio.h>
#include <stdlib.h>
#include "linked_queu.h"

void print(queu_entry x)
{
    printf("%d ",x);
}
int main()
{
    queu q;
    initial_queu(&q);
    append(1,&q);
    append(2,&q);
    append(3,&q);
    printf("%d ",queu_size(&q));
    traversequeu(&q,&print);
    return 0;
}

