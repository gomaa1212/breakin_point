#ifndef STACK_H
#define STACK_H

typedef char stack_entry;

typedef struct stacknode
{
    stack_entry entry;
    struct stacknode *next;
}stacknode;

typedef struct Stack
{
     stacknode *top;

}Stack;
void initial_stack(Stack *ps);
void push(stack_entry value,Stack *ps);
void pop(stack_entry *value,Stack *ps);
int stack_empty(Stack *ps);
int stack_full(Stack *ps);
void clear_stack(Stack *ps);
void traversestack(Stack *ps,void (*pf)(stack_entry));
int stack_size(Stack *ps);
char stack_top(Stack *ps);
#endif // STACK_H
