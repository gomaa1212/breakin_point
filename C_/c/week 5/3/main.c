#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=4,y=2,swap;
    printf("Before swapping\n");
    printf("x=%d,y=%d\n",x,y);
    int *px=&x;
    int *py=&y;
    swap=*px;
    *px=*py;
    *py=swap;
    printf("After swapping\n");
    printf("x=%d,y=%d\n",x,y);
    return 0;
}
