
      //Write a C code that gets the number of the digits in a given number.
#include <stdio.h>
#include <stdlib.h>
int number_of_the_digits(int n);

int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    printf("the number of the digits = %d",number_of_the_digits(num));
    return 0;
}
int number_of_the_digits(int n)
{
    int _n,i;
    if (n==0)
    {
        return 1;
    }
    else {
    for (i=0;i>=0;i++)
    {
        _n=n%10;
        n=n/10;
        if (_n==0)
        {
            break;
        }
    }
    return i;
    }


}
