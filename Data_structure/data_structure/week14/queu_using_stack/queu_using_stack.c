#include "queu_using_stack.h"
void initial_queu(queu *pq)
{
    initial_stack(&pq->input_s);
    initial_stack(&pq->out_s);
    pq->Size=0;
}
void append(queu_entry value,queu *pq)
{
    push(value,&pq->input_s);
    pq->Size++;
}
void serve(queu_entry *value,queu *pq)
{
    if(stack_empty(&pq->out_s))
    {
        while(!stack_empty(&pq->input_s))
        {
            stack_entry temp;
            pop(&temp,&pq->input_s);
            push(temp,&pq->out_s);
        }
    }
    if(queu_empty(pq))
    {
        printf("queue is empty \n ");
    }
    pop(value,&pq->out_s);
    pq->Size--;
}
int queu_empty(queu *pq)
{
    if(pq->Size==0)
    {
        return 1;
    }
    return 0;
}
int queu_full(queu *pq)
{
    return 0;
}
void clear_queu(queu *pq)
{
    clear_stack(&pq->input_s);
    clear_stack(&pq->out_s);
    pq->Size=0;
}
int queu_size(queu *pq)
{
    return pq->Size;
}


