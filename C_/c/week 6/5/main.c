#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_extension(const char *file_name , char *extension);

int main()
{
    const char x[10];
    char y[10];
    get_extension( x,y);
    return 0;
}

void get_extension(const char *file_name , char *extension)
{
    printf("Enter file name: ");
    scanf("%s", file_name);

    int i = 0;
    while (file_name[i] != '\0')
    {
        if (file_name[i] == '.')
        {
            strcpy(extension,file_name+i+1);
             printf("Extension: %s\n", extension);
            break;
        }
        i++;
    }

}
