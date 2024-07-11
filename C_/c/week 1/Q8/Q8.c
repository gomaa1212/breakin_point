#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    for (int i=1;i<=12;i++)
    {
        printf("%d*%d=%d\n",i,n,i*n);
    }
    return 0;
}
