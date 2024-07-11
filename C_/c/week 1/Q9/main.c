#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    int fac=1;
    while (x!=0)
    {
        fac=fac*x;
        x--;

    }
    printf(" factorial = %d\n",fac);
    return 0;
}
