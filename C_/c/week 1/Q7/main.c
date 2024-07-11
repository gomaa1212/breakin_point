#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10];
    printf("enter 10 numbers\n");
    for (int i=0;i<10;i++)
    {
        printf("number %d is : \n",i);
        scanf("%d",&x[i]);
    }
    int sum=0;float avg;
    for (int i=0;i<10;i++)
    {
        sum=sum+x[i];
    }
    printf("sum = %d\n",sum);
    avg=sum/10;
    printf("Average = %f\n",avg);
    return 0;
}
