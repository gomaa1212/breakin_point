#include <stdio.h>
#include <stdlib.h>
int sum(int *p1,int *p2);
int main()
{
    int val1,val2;
    scanf("%d",&val1);
    scanf("%d",&val2);
    printf("sum = %d\n",sum(&val1,&val2));
    return 0;
}
int sum(int *p1,int *p2)
{
    return *p1+*p2;
}
