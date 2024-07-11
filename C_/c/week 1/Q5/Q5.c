#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("Enter first number\n");
    scanf("%d",&x);
     printf("Enter second number\n");
    scanf("%d",&y);
     printf("Enter third number\n");
    scanf("%d",&z);
    printf("\n");
    int max=(x>y&&x>z)?x:(y>z&&y>x)?y:z;
    printf(" max number is %d",max);
    printf("\n");

    return 0;
}
