
//Write a c code login code but use a function called login.
#include <stdio.h>
#include <stdlib.h>
const int user_name=1234;
const int password=5678;
void login(int _pass,int _user_name);

int main()
{
    int x,y;
    printf("enter user name\n");
    scanf("%d",&x);
    printf("enter password\n");
    scanf("%d",&y);
    login(y,x);
    printf("\n");
    return 0;
}
void login(int _pass,int _user_name)
{
    if (_user_name==user_name)
    {
        if (_pass==password)
        {
            printf("Welcome\n");
        }
        else
        {
            for (int i=0;i<2;i++)
            {

                printf("try again\n");
                scanf("%d",&_pass);
                if (_pass==password)
                {
                    printf("Welcome");
                    break;
                }
                if (i==1)
                {
                    printf("no more tries");
                }

            }
        }
    }
    else
    {
        printf("incorrect user name");
    }
}
