#include <stdio.h>
#include <stdlib.h>
#include "queu.h"
#include "Stack.h"
void display(customer c);
int main()
{
    customer c;
    Stack s;
    initial_stack(&s);
    queu q;
    initial_queu(&q);
    int choice;
    menu();
    while(1)
    {
        printf("enter new choice \n");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("enter model of car : ");
            scanf("%d",&c.model);
            printf("enter id of customer : ");
            scanf("%d",&c.id);
            printf("enter name of customer : ");
            scanf("%s",c.name);
            push(c,&s);
            append(c,&q);

        }
        if(choice==2)
        {
            customer val;
            serve(&val,&q);
            printf("name = %s \n",val.name);
            printf("id = %d \n",val.id);
            printf("model = %d \n",val.model);
        }
        if(choice==3)
        {
            printf("%d\n",queu_size(&q));
        }
        if(choice==4)
        {
            traversr_queu(&q,&display);
        }
        if(choice==5)
        {
            transversestack(&s,&display);
        }
        if(choice==6)
        {
            break;
        }
    }



    return 0;
}
int menu()
{
    printf("1-add new customer \n");
    printf("2-serve a customer \n");
    printf("3-display num of customer waiting \n");
    printf("4-display customer information \n");
    printf("5-display customer information in the most recent order \n");
    printf("6-exist \n");
}
void display(customer c)
{
    printf("name = %s \n",c.name);
    printf("id = %d \n",c.id);
    printf("model = %d \n",c.model);

}
