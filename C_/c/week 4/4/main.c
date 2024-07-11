#include <stdio.h>
#include <stdlib.h>
void bubble(int arr[]);
int main()
{
    int arr[5]={1,6,4,8,2};
     bubble(arr);
    return 0;
}
void bubble(int arr[])
{
    int swap;
    for (int i=0;i<5;i++)
    {
        for (int j=i+1;j<5;j++)
        {
            if (arr[i]<=arr[j])
            {
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
        printf("%d ",arr[i]);
    }
}
