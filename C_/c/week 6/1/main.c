#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void type(char word[21]);
int main()
{
    char x[21];
    type(x);


    return 0;
}
void type(char word[21])
{
    char small[21];
    char large[21];
    printf("Enter word : ");
    scanf("%s",word);
    strcpy(small, word);
    strcpy(large, word);
   while(1)
    {
        printf("Enter word : ");
        scanf("%s",word);
        if(strlen(word)==4)
        break;
        if (strcmp(word, small) < 0)
            strcpy(small, word);
        if (strcmp(word, large) > 0)
            strcpy(large, word);
    }
    printf("small word : %s\n",small);
    printf("large word : %s",large);
}






