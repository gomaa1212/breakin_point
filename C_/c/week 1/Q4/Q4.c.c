#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Enter your grade \n");
    scanf("%d",&grade);
    if (grade>=85)
    {
        printf("Excellent");
    }
    else if (grade<85&&grade>=75)
    {
        printf("Very Good");
    }
     else if (grade<75&&grade>=65)
    {
        printf("Good");
    }
    else if (grade<65&&grade>=50)
    {
        printf("weak");
    }
    else
    {
        printf("very weak");
    }
    printf("\n");



    return 0;
}
