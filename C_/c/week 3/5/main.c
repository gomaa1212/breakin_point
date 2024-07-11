#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*05.
Write a program that reads a 5x5 array of integers and then prints the row sums and the
sum of the columns:*/\
    int arr[5][5];
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int sumrow,sumcolumn;
    printf("row totals : ");
    for (int i=0;i<5;i++)
    {
        sumrow=0;
        for (int j=0;j<5;j++)
        {
            sumrow=sumrow+arr[i][j];

        }
        printf("%d ",sumrow);
    }
    printf("\n");
    printf("column totals : ");
    for (int i=0;i<5;i++)
    {
        sumcolumn=0;
        for (int j=0;j<5;j++)
        {
            sumcolumn=sumcolumn+arr[j][i];

        }
        printf("%d ",sumcolumn);
    }
    printf("\n");

    return 0;
}
