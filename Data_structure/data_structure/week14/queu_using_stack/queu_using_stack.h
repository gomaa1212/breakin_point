#ifndef QUEU_H
#define QUEU_H
#include <Stack.h>
typedef int queu_entry;
typedef struct queu
{
    Stack input_s;
    Stack out_s;
    int Size;
}queu;

void initial_queu(queu *pq);
void append(queu_entry value,queu *pq);
void serve(queu_entry *value,queu *pq);
int queu_empty(queu *pq);
void clear_queu(queu *pq);
int queu_size(queu *pq);
int queu_full(queu *pq);
#endif // QUEU_H
