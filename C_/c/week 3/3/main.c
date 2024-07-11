#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*03.
Write a program in C to print all unique elements of an unsorted array.
The elements of the array entered by the user.
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

    for (int i=0;i<n;i++)
    {
         int unique=0;
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                 unique=1;
            }

        }
        if (!unique)
            {
                printf("%d ",arr[i]);
            }
    }





    return 0;
}
