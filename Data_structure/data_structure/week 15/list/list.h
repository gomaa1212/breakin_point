#ifndef LIST_H
#define LIST_H
typedef int list_type;

typedef struct listnode
{
    list_type entry;
    struct listnode *next;
}listnode;

typedef struct List
{
    listnode *head;
    int size;
}List;

void initial_list(List *pl);
int list_empty(List *pl);
int list_full(List *pl);
int list_size(List *pl);
void destroy_list(List *pl);
void traverse_list(List *pl,void(*pf)(list_type));
void insert_list(int p,list_type value,List *pl);
void delete_list(int p,list_type *v,List *pl);
void retrieve_list(int p,list_type *v,List *ls);
void replace_list(int p,list_type v,List *ls);
void reverse_list(List *pl);
int mid_list(List *pl);
int sum_list(List *pl);
list_type max_list_value(List *pl);

#endif // LIST_H
