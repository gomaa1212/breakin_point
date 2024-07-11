#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x=10;   //defines an int initialized with 10,
    int *p=&x;  //then define a pointer points to that int
    printf("%d\n",x);
    *p=20;     //change the value of the int through the pointer to be 20,
    printf("%d\n",x);
    return 0;
}
