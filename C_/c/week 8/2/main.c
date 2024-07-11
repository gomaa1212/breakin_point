#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct id
{
    char  id[20];
    struct degree
    {
        float Programming, Data_Structures,Math ,Algorithms;
    }degree;
}Id;
int main()
{
   Id student[10];
   printf("enter student id\n");
   for(int i=0;i<10;i++)
   {
       scanf("%s",&student[i].id);
   }
   printf("enter rondom degree of programming\n");
       for(int i=0;i<10;i++)
       {
           scanf("%f",&student[i].degree.Programming);
       }
   printf("enter rondom degree of Data_Structures\n");
       for(int i=0;i<10;i++)
       {
           scanf("%f",&student[i].degree.Data_Structures);
       }

    printf("enter rondom degree of Math\n");
       for(int i=0;i<10;i++)
       {
           scanf("%f",&student[i].degree.Math);
       }
    printf("enter rondom degree of Algorithms\n");
       for(int i=0;i<10;i++)
       {
           scanf("%f",&student[i].degree.Algorithms);
       }
       printf("________________________________________________\n");
       char user_id[20];
       int num=-1;
       printf(" Please Enter Your Id\n");
       scanf("%s",&user_id);
       for(int i=0;i<10;i++)
       {
           if(strcmp(student[i].id,user_id)==0)
           {
               num=i;
               break;
           }
       }
       if(num==-1)
       {
           printf("Invalid Id\n");
       }
       else
       {
           printf("_______Your degree________\n");
           printf("Your degree in Programming = %f \n",student[num].degree.Programming);
           printf("Your degree in Data_Structures = %f \n",student[num].degree.Data_Structures);
           printf("Your degree in Math = %f \n",student[num].degree.Math);
           printf("Your degree in Algorithms = %f \n",student[num].degree.Algorithms);

       }











    return 0;
}
