#include <stdio.h>
#include <stdlib.h>

void repeat(int arr[], int length);

int main()
{
    /*04.
Write a C code to find the repeating element in a given array through a function. The
function takes the array and returns the element.*/
    int n;
    printf("enter the length of array\n");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    repeat(arr,n);


    return 0;
}
void repeat(int arr[],int length)
{
    for (int i=0;i<length;i++)
    {
        int unique=0;
        for (int j=i+1;j<length;j++)
        {
            if (arr[i]==arr[j])
            {
                unique=1;
                break;

            }
        }
        if (unique)
        {
            printf("%d ",arr[i]);
        }
    }
}
