#include "doubly.h"
#include <stdio.h>
#include <stdlib.h>

void initial_doubly(doubly *pd)
{
    pd->head=NULL;
    pd->size=0;
}
void insert_doubly(int pos,doubly_entry value,doubly *pd)
{
    doublynode *d,*q,*p;
    d=(doublynode*)malloc(sizeof(doublynode));
    if(pos==0)
    {
        d->next=pd->head;
        pd->head=d;
        d->previous=NULL;
        d->entry=value;
    }
    else
    {
        q=pd->head;
        for(int i=0;i<pos;i++)
        {
            q=q->next;
        }
        p=q->next;
        d->next=q->next;
        q->next=d;
        d->entry=value;
        d->previous=p->previous;
        p->previous=d;
    }
}
