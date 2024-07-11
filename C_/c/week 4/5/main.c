#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,y=2,z=3;
    int *px=&x;
    int *py=&y;
    int *pz=&z;

        //a- Print with labels the values of x, y, z, px, py, pz, *px, *py, *pz.
    printf("x=%d,y=%d,z=%d\npx=%p,py=%p,pz=%p\n*px=%d,*py=%d,*pz=%d\n\n",x,y,z,px,py,pz,*px,*py,*pz);

    printf("Swapping pointers.\n\n");
    *pz = *px; *px = *py; *py = *pz;
    printf("x=%d,y=%d,z=%d\npx=%p,py=%p,pz=%p\n*px=%d,*py=%d,*pz=%d\n",x,y,z,px,py,pz,*px,*py,*pz);

    return 0;
}
