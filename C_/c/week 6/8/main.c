#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *months[]={ "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};
    int day;
    int month;
    int year;
    scanf("%d/%d/%d",&month,&day,&year);
    printf("You entered the date %s %d , %d",months[month-1],day,year);
    return 0;
}
