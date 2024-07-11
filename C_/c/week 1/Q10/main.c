#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id=10012;
    int pass=1234;
    int enter_id;
    int enter_pass;
    int i;
    printf("Enter your ID : ");
    scanf("%d",&enter_id);

    if (enter_id==id)
    {
     printf("Enter Your Password : ");
     scanf("%d",&enter_pass);
     if (enter_pass==pass)
     {
         printf("Welcome");
     }
     else
     {
         for ( i=0;i<2;i++)
         {
             printf("You are not registered\n");
             scanf("%d",&enter_pass);
             if (enter_pass==pass)
             {
               printf("Welcome");
                 break;
             }

         }
         if (i==2)
         {
              printf("no more tries");

         }

     }
    }
    else
        printf("incorrect id");
     printf("\n");
    return 0;
}
