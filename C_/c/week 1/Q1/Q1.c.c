#include <stdio.h>
#include <stdlib.h>

 int  main()
{
    int hours;
    float salary;
    printf("enter your working hours : ");
    scanf("%d",&hours);
      salary=hours*50;
    if (hours<40)
    {
        salary=hours*50*.9;
    }


    printf("your salary is %0.2f",salary);
    return 0;

    }



