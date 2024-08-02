#ifndef _STACK_h
#define _STACK_h
#include <stdio.h>
#include <stdlib.h>
#define max_size 100

typedef struct Stack
{
    int top;
    int arr[max_size];
}Stack;


void initial_stack(Stack *ps);
void push(int value,Stack *ps);
int stackfull(Stack ps);
void pop(int *valu,Stack *ps);
int stackempty(Stack *ps);
int stacktop(Stack *ps);
int stacksize(Stack *ps);
void destroystack(Stack *ps);
void transversestack(Stack *ps);
int first_element(Stack *ps);
void copy_stack(Stack *ps1,Stack *ps2);
int min_stack(Stack *ps);


#endif

