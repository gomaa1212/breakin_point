#ifndef _STACK_H
#define _STACK_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_size 100

typedef struct Stack
{
    int top;
    char arr[max_size]
}Stack;

void initial_stack(Stack *ps);
void push(char value,Stack *ps);
int stackempty(Stack *ps);
char pop(Stack *ps);
int ismatch(char value1,char value2);
int check(char *strg);

#endif // _STACK_H
