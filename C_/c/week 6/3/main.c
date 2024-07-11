#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Capitalize(char word[100]);
int main()
{
    char x[100];
    Capitilize(x);
    return 0;
}
void Capitilize(char word[100])
{
    char *ptr=word;
    gets(ptr);
    while(*ptr!='\0')
    {
    if(*ptr>=97&&*ptr<=122)
    {
        *ptr-=32;
    }
    ptr++;
    }

    printf("%s",word);
}
