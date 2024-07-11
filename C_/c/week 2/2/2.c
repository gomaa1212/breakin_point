
         //  Write a C code swap two global variables through a function.

#include <stdio.h>
#include <stdlib.h>
int num_1,num_2;
void swap(int x,int y);

int main()
{
    printf("first num = ");
    scanf("%d",&num_1);
    printf("second num = ");
    scanf("%d",&num_2);
    printf("_____After swapping_____\n");
    swap(num_1,num_2);
    return 0;
}
void swap(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("first num = %d \nsecond num = %d\n",x,y);
}

