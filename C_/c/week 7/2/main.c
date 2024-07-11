#include <stdio.h>
#include <stdlib.h>
#define len(x) (sizeof(x)/sizeof(x[0]))
int main()
{
    int arr[]={1,2,3,4,5};
    printf("size = %d",len(arr));
    return 0;
}
