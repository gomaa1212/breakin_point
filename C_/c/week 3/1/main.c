#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*01.
Write a program in C to sort elements of an array in ascending and descending order :
The User Enter 0 for ascending or Enter 1 for descending. The elements of the array
entered by the user.
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
            if (arr[i]>=arr[j])
            {
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;

            }
        }

    }
    int choice;
    printf("Enter 0 for ascending or Enter 1 for descending \n");
    scanf("%d",&choice);
    if (choice==1)
    {
        for (int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    else if (choice==0)
    {
        for (int i=n-1;i>=0;i--)
        {
            printf("%d ",arr[i]);
        }
    }
    else
    {
        printf("incorrect choice");
    }
    printf("\n");




    return 0;
}
