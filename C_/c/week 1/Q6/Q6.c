#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter the result of 3*4\n");
    scanf("%d",&x);
    if (x==12)
        printf("Thanks");
   while (x!=12)
    {
        printf("Try Again\n");
        scanf("%d",&x);
        if (x==12)
        {
            printf("Thanks");
            break;
        }
    }
    printf("\n");





    return 0;
}
