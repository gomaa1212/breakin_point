#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[5]={1,2,3,4,5};
    int num=binary_serch(arr,5,3);
    printf("%d",num);
    return 0;
}
int binary_serch(int arr[],int l,int num)
{
    int low=0;
    int high=l-1;
    int mid;
    while(high>low)
    {
        mid=(low+high)/2;
        if(num==arr[mid])
        {
            return mid;
        }
        if(num>arr[mid])
        {
            low=mid+1;
        }
        else if(num<arr[mid])
        {
            high=mid-1;
        }
//if(low==high)
            return -1;

    }
}
