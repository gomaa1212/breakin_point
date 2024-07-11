#include <stdio.h>
#include <stdlib.h>
void mul(int arr1[],int arr2[],int length);
int main()
{
    int arr1[4]={1,2,3,4};
    int arr2[4]={5,6,7,8};
    int len=sizeof(arr1)/sizeof(arr1[0]);
    mul(arr1,arr2,len);
    return 0;
}
void mul(int arr1[],int arr2[],int length)
{
    int res[length];
    for (int i=0;i<length;i++)
    {
        res[i]=arr1[i]*arr2[i];
        printf("%d ",res[i]);
    }

}
