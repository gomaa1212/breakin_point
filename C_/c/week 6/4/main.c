#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[21];
    Censor(x);
    return 0;
}
void Censor(char word[21])
{
    gets(word);
  int i=0;
  while(word[i]!='\0')
  {
      if(word[i]=='f'&&word[i+1]=='o'&&word[i+2]=='o')
      {
          word[i]='x';
          word[i+1]='x';
          word[i+2]='x';
      }
      i++;
  }
  printf("%s",word);
}

