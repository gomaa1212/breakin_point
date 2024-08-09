#include "queu.h"

void initial_queu(queu *pq)
{
    pq->rear=-1;
    pq->Front=0;
    pq->size=0;
}
void append(queu_entry valu,queu *pq)
{
    if(queu_full(pq))
    {
        printf("Queu over flow \n");
    }
    if(pq->rear==max_size-1)
    {
        pq->rear=0;
    }
    else
    {
        pq->rear++;
    }
    pq->arr[pq->rear]=valu;
    pq->size++;
}
void serve(queu_entry *value,queu *pq)
{
    if(queu_empty(pq))
    {
        printf("Queu is empty \n");
    }
    if(pq->Front==max_size-1)
    {
        *value=pq->arr[pq->Front];
        pq->Front=0;
        pq->size--;
    }
    else
    {
        *value=pq->arr[pq->Front];
        pq->Front++;
        pq->size--;
    }
}
int queu_empty(queu *pq)
{
    if(pq->size==0)
    {
        return 1;
    }
    return 0;
}
int queu_full(queu *pq)
{
    if(pq->size==max_size)
    {
        return 1;
    }
    return 0;
}
int queu_size(queu *pq)
{
    return pq->size;
}
void clear_queu(queu *pq)
{
    pq->rear=-1;
    pq->Front=0;
    pq->size=0;
}
void traversr_queu(queu *pq,void (*pf)(queu_entry))
{
    for(int i=pq->Front,s=0;s<pq->size;s++)
    {
        (*pf)(pq->arr[i]);
        if(i==max_size-1)
        {
            i=0;
        }
        else
        {
            i++;
        }
    }
}

