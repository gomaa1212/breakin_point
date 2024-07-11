#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*02.
Write a program in C to find the second largest element in an array.
    */
     int n;
    printf("enter the length of array\n");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    int swap;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]<=arr[j])
            {
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;

            }
        }

    }
    printf("the second largest element = %d\n",arr[1]);

    return 0;
}
