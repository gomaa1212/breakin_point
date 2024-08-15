
#include "list.h"
#include <stdio.h>
#include <stdlib.h>
void initial_list(List *pl)
{
    pl->head=NULL;
    pl->size=0;
}
int list_empty(List *pl)
{
    if(pl->size==0)
        return 1;
    return 0;
}
int list_full(List *pl)
{
    return 0;
}
int list_size(List *pl)
{
    return pl->size;
}
void destroy_list(List *pl)
{
    listnode *l;
    while(pl->head!=NULL)
    {
        l=pl->head;
        pl->head=pl->head->next;
        free(l);
    }
    pl->size=0;
}
void traverse_list(List *pl,void(*pf)(list_type))
{
    listnode *l=pl->head;
    while(l)
    {
        (*pf)(l->entry);
        l=l->next;
    }
}
void insert_list(int p,list_type value,List *pl)
{
    int i;
    listnode *q;
    listnode *l=(listnode*)malloc(sizeof(listnode));
    l->entry=value;
    l->next=NULL;
    if(p==0)
    {
        l->next=pl->head;
        pl->head=l;
    }
    else
    {
        q=pl->head;
        for(i=0;i<p-1;i++)
        {
            q=q->next;
        }
        l->next=q->next;
        q->next=l;

    }
    pl->size++;
}
void delete_list(int p,list_type *v,List *pl)
{
    int i;
    listnode *l,*q;
    if(p>=pl->size)
    {
        printf("not found in the list!! \n");
    }
    else if(p==0)
    {
        l=pl->head;
        *v=l->entry;
        pl->head=pl->head->next;
        free(l);
    }
    else
    {
        q=pl->head;
        for(i=0;i<p-1;i++)
        {
            q=q->next;
        }
        l=q->next;
        *v=l->entry;
        q->next=l->next;
        free(l);
    }
    pl->size--;
}
void retrieve_list(int p,list_type *v,List *ls)
{
    listnode *l;
    l=ls->head;
    for(int i=0;i<p;i++)
    {
        l=l->next;
    }
    *v=l->entry;
}
void replace_list(int p,list_type v,List *ls)
{
    listnode *l;
    l=ls->head;
    for(int i=0;i<p;i++)
    {
        l=l->next;
    }
    l->entry=v;
}
void reverse_list(List *pl)
{
    listnode *n,*p,*c;
    c=pl->head;
    n=NULL;
    p=NULL;
    while(c!=NULL)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    pl->head=p;
}
int mid_list(List *pl)
{
    if(pl->size>1){
    listnode *l;
    l=pl->head;
    for(int i=0;i<pl->size/2;i++)
    {
        l=l->next;
    }
    return l->entry;
    }
    return pl->head->entry;
}
list_type sum_list(List *pl)
{
    listnode *l;
    l=pl->head;
    list_type sum=0;
    while(l)
    {
        sum+=l->entry;
        l=l->next;
    }
    return sum;
}
list_type max_list_value(List *pl)
{
    listnode *l;
    l=pl->head;
    list_type max=l->entry;
    while(l)
    {
        if(max<(l->entry))
        {
            max=l->entry;
        }
        l=l->next;
    }
    return max;
}


