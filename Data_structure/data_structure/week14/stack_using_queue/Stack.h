#ifndef STACK_H
#define STACK_H
#include "linked_queu.h"
typedef int stack_entry;

typedef struct Stack
{
    queu q;
}Stack;

void initial_stack(Stack *ps);
void push(stack_entry value,Stack *ps);
void pop(stack_entry *value,Stack *ps);
int stack_empty(Stack *ps);
int stack_full(Stack *ps);
int stack_size(Stack *ps);
void display(stack_entry x);
void traversestack(Stack *ps);
void clear_stack(Stack *ps);
#endif // STACK_H
