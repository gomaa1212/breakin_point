#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5,y=3;
    int z;
    scanf("%d",&z);
    int *p1=&x;
    int *p2=&y;
    printf("%d",*p1+*p2);

    return 0;
}
