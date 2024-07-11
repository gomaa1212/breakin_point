#include <stdio.h>
#include <stdlib.h>
int Max(int arr[],int l);
int main()
{
    int arr[4]={33,22,133,33};
    int max=Max(arr,4);
    printf("%d",max);
    return 0;
}
int Max(int arr[],int l)
{
   int max=arr[0];
   for(int i=0;i<l;i++)
   {
       if(max<arr[i])
       {
           max=arr[i];
       }
   }
   return max;
}
