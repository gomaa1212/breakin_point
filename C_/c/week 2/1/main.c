
/*01.
   Write a C code to ask the user to enter two numbers, then the main function will call a
   function named Get_Max that takes the two values entered by the user then returns the
   maximum of them.*/

#include <stdio.h>
#include <stdlib.h>

int Get_Max(int num_1,int num_2);

int main()
{
    int x,y;
    printf("enter number : \n");
    scanf("%d",&x);
    printf("enter number : \n");
    scanf("%d",&y);

    int max=Get_Max(x,y);
    printf("Max = %d\n",max);
    return 0;
}
int Get_Max(int num_1,int num_2)
{
    if(num_1>=num_2)
    {
        return num_1;
    }
    else
    {
        return num_2;
    }
}
