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
    gets(word);
    for(int i=0;i<100;i++)
    {
        if(word[i]>=97&&word[i]<=122)
        {
            word[i]-=32;
        }
    }
    printf("%s",word);
}
