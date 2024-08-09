#ifndef QUEU_H
#define QUEU_H
#define max_size 4
#include "global.h"
typedef struct queu
{
    int rear;
    int Front;
    customer arr[max_size];
    int size;
}queu;

void initial_queu(queu *pq);
void serve(customer *value,queu *pq);
void append(customer valu,queu *pq);
int queu_empty(queu *pq);
int queu_full(queu *pq);
int queu_size(queu *pq);
void clear_queu(queu *pq);

#endif // QUEU_H
