#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    const char x[50];
    char y[50];
    build_index_url(x,y);
    return 0;
}
void build_index_url(const char *domain , char *index_url)
{
    printf("enter the domain : ");
    scanf("%s",domain);
    strcpy(index_url,"http://www.");
    strcat(index_url,domain);
    strcat(index_url,"/index.html");
    printf("%s\n",index_url);
}
