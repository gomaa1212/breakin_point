#include <stdio.h>
#include <stdlib.h>
#define CHECK(x,y,n) if(x>0&&x<n-1&&y>0&&y<n-1)\
                            printf("1");\
                     else\
                            printf("0");
#define MEDIAN(x,y,z) ((x+y+z)/3)
#define POLUNOMIAL(x) (3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6)
int main()
{
    int x,y,n,z;
    printf("x y n\n");
    scanf("%d %d %d",&x,&y,&n);
    CHECK(x,y,n);
    printf("\n\n");
    printf("y = ");
    scanf("%d",&z);
    printf("mediam = %d\n\n",MEDIAN(x,y,z));
    printf("polynomial of x = %d\n\n",POLUNOMIAL(x));
    return 0;
}
