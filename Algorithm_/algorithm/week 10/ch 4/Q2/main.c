#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int element_num=count(arr,5);
    printf("%d",element_num);
    return 0;
}
int count(int arr[],int l)
{
    if(l==0)
    {
        return 0;        //base case
    }
    else
        return 1+count(arr+1,l-1);        //recursion case
}
