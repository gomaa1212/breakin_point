#include <stdio.h>
#include <stdlib.h>
#define cube(x) (x*x*x)
#define remd(n) (n%4)
#define prd(x,y) if(x*y<100)\
                   printf("1");\
                 else\
                   printf("0");
int main()
{
    int x,n,y;
    printf("x = ");
    scanf("%d",&x);
    printf("cube of x = %d\n",cube(x));
    printf("n = ");
    scanf("%d",&n);
    printf("The reminder when n is divided by 4 = %d\n",remd(n));
    printf("y = ");
    scanf("%d",&y);
    prd(x,y)
    return 0;
}
