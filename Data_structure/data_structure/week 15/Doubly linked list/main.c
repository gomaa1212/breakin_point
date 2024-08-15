#include <stdio.h>
#include <stdlib.h>
#include "doubly.h"
int main()
{
    doubly d;
    initial_doubly(&d);
    insert_doubly(0,1,&d);
    return 0;
}
