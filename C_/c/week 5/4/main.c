#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len,i=0;
    printf("enter length of array\n");
    scanf("%d",&len);
    int arr[len];
    int *p=arr;
    for (*p=arr;i<len;p++)
    {
        printf("arr[%d]=",i);
        scanf("%d",p);
        i++;
    }
    for (i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");


    return 0;
}
