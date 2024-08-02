#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
int main()
{
     char *str1 = "[...(...) {...}...]";
     char *str2 = "[...(...) {...}]...)";
     char *str3 = "(... [...] (...) {...}]";
     printf("str1 is valid ? %d\n",check(str1));
     printf("str2 is valid ? %d\n",check(str2));
     printf("str3 is valid ? %d",check(str3));
    return 0;
}
