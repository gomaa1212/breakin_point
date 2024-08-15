#ifndef DOUBLY_H
#define DOUBLY_H

typedef int doubly_entry;

typedef struct doublynode
{
    struct listnode *next;
    struct listnode *previous;
    doubly_entry entry;
}doublynode;

typedef struct doubly
{
    doublynode *head;
    int size;
}doubly;

void insert_doubly(int pos,doubly_entry value,doubly *pd);
#endif // DOUBLY_H
