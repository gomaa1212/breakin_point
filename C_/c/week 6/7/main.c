#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void remove_filename(char *url);
int main()
{
    const char x[50];
    printf("enter the url : ");
    scanf("%s",x);
   remove_filename(x);
    return 0;

}
void remove_filename(char *url)
{
    int len=strlen(url);
    int i=0;
    while(url[i]!='\0')
    {
        if(url[len]=='/')
        {
            url[len]='\0';
            break;
        }
        len--;
        i++;
    }
    printf("%s",url);

}
