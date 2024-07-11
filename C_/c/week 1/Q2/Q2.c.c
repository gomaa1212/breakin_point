#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter the number : ");
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    return 0;
}
