#ifndef QUEU_H
#define QUEU_H
#define max_size 4
typedef int queu_entry;
typedef struct queu
{
    int rear;
    int Front;
    queu_entry arr[max_size];
    int size;
}queu;

void initial_queu(queu *pq);
void serve(queu_entry *value,queu *pq);
void append(queu_entry valu,queu *pq);
int queu_empty(queu *pq);
int queu_full(queu *pq);
int queu_size(queu *pq);
void clear_queu(queu *pq);

#endif // QUEU_H

