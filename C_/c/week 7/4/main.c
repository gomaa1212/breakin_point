#include <stdio.h>
#include <stdlib.h>
#define spanish
int main()
{
    #ifdef english
        printf("Insert Disk 1");
    #elif defined(french)
        printf("Inserez Le Disque 1");
    #elif defined(spanish)
        printf("Inserte El Disco 1");
    #endif // english
    return 0;
}
