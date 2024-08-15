#include <stdio.h>
#include <stdlib.h>
#include "list.h"
void display(list_type x)
{
    printf("%d ",x);
}
int main()
{
    list_type x;
    List l;
    initial_list(&l);

    insert_list(0,0,&l);
    delete_list(0,&x,&l);    //delete the only node
    printf("value in only node = %d \n",x);

    insert_list(0,0,&l);
    insert_list(1,1,&l);
    insert_list(2,2,&l);
    insert_list(3,3,&l);
    insert_list(4,4,&l);
    delete_list(0,&x,&l);      //delete value in first node
    printf("value in first node = %d \n",x);
    delete_list(6,&x,&l);        //not in the list



    List s;
    initial_list(&s);
    insert_list(0,0,&s);
    insert_list(1,1,&s);
    insert_list(2,2,&s);
    insert_list(3,3,&s);
    insert_list(4,4,&s);
    printf("________________________________________________________________________\n");
    printf("list before reverse : ");
    traverse_list(&s,&display);
    printf("\n");
    reverse_list(&s);
    printf("list after reverse : ");
    traverse_list(&s,&display);
    printf("\n");
    printf("data in middle node = %d \n",mid_list(&s));
    printf("sum of the list = %d \n",sum_list(&s));
    printf("max value in the list = %d\n",max_list_value(&s));




    return 0;
}
