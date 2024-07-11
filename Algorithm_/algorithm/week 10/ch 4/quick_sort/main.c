#include <stdio.h>
#include <stdlib.h>
void concatinate(int res[],int less[],int index,int pivot,int greater[],int Index);
void quicksort(int arr[],int l);
int main()
{
   int arr[5]={3,2,5,6,1};
   quicksort(arr,5);
   for(int i=0;i<5;i++)
   {
       printf("%d ",arr[i]);
   }
    return 0;
}
void concatinate(int res[],int less[],int index,int pivot,int greater[],int Index)
{
    int i,j;
    for(i=0;i<index;i++)
    {
        res[i]=less[i];
    }
    res[i]=pivot;
    for(j=0;j<Index;j++,i++)
    {
        res[i+1]=greater[j];
    }
}
void quicksort(int arr[],int l)
{
    int* less = (int*)malloc(l*sizeof(int));
    int* greater = (int*)malloc(l*sizeof(int));
     int index=0;
     int Index=0;
     int pivot=arr[0];
    if(l<2)
    {
        return;
    }
    else
    {

        for(int i=1;i<l;i++)
        {
            if(pivot>=arr[i])
            {
                less[index]=arr[i];
                index++;
            }
            else if(pivot<arr[i])
            {
                greater[Index]=arr[i];
                Index++;
            }
        }
        quicksort(less,index);
        quicksort(greater,Index);
        concatinate(arr,less,index,pivot,greater,Index);
        free(less);
        free(greater);

    }
}
