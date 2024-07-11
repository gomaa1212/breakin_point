#include <stdio.h>
int sum(int arr[],int l);
int main()
{
    int arr[3]={2,4,6};
    int Sum=sum(arr,3);
    printf(" Sum = %d",Sum);
    return 0;
}
int sum(int arr[],int l)
{
    if(l==1)
    {
        return arr[0];          //Base Case
    }
    else
        return arr[0]+sum(arr+1,l-1);     //recursion case
}
