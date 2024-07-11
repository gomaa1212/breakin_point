
//Write a C code containing a function that gets the fibonacci of a given number.
#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n);
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("fibonacci = %d",fibonacci(n));

    return 0;
}
int fibonacci(int n)
{
     if (n <= 1)
        return n;
     else
    return fibonacci(n-1)+fibonacci(n-2);
}
